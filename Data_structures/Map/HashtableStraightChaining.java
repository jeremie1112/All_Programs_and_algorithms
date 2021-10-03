public class HashtableStraightChaining implements Map {
    private Entry entries[];
    private int size;
    private float loadFactor;

    public HashtableStraightChaining(int capacity, float loadFactor) {
        entries = new Entry[capacity];
        this.loadFactor = loadFactor;
    }

    public HashtableStraightChaining(int capacity) {
        this(capacity, 0.75f);
    }

    public HashtableStraightChaining() {
        this(7);
    }

    private class Entry {
        Object key, value;
        Entry next;

        public Entry(Object key, Object value, HashtableStraightChaining.Entry next) {
            this.key = key;
            this.value = value;
            this.next = next;
        }

        @Override
        public String toString() {
            return "(" + key + "," + value + ")";
        }
    }

    private int hash(Object key) {
        return (key.hashCode() & 0x7FFFFFFF) % entries.length;
    }

    @Override
    public void put(Object key, Object value) {
        if (size >= (int) (entries.length * loadFactor))
            reHash();
        int h = hash(key);
        entries[h] = new Entry(key, value, entries[h]);
        size++;
    }

    @Override
    public Object get(Object key) {
        if (size == 0)
            throw new IllegalStateException("Table is empty!");
        int h = hash(key);
        Entry p = entries[h];
        while (p != null) {
            if (p.key.equals(key))
                return p.value;
            p = p.next;
        }
        return "Value not found!";
    }

    @Override
    public Object remove(Object key) {
        if (size == 0)
            throw new IllegalStateException("Table is empty!");
        int h = hash(key);
        Entry p = entries[h];
        if (p.key.equals(key)) {
            Object value = p.value;
            entries[h] =  entries[h].next;
            --size;
            return value;
        }
        while (p.next != null) {
            if (p.next.key.equals(key)) {
                Object value = p.next.value;
                p.next = p.next.next;
                --size;
                return value;
            }
            p = p.next;
        }
        return "Value not found!";
    }

    @Override
    public int size() {
        return size;
    }

    private void reHash() {
        Entry[] oldEntries = entries;
        entries = new Entry[size * 2 + 1];
        for (int i = 0; i < oldEntries.length; i++) {
            Entry p = oldEntries[i];
            if (p == null)
                continue;
            int h = hash(p.key);
            for (int j = 0; j < entries.length; j++) {
                while (p != null) {
                    entries[h] = new Entry(p.key, p.value, entries[h]);
                    p=p.next;
                }
            }
        }
    }

    @Override
    public String toString() {
        if (size == 0)
            return "[]";
        String buf = "[";
        for (int i = 0; i < entries.length; i++) {
            if (entries[i] != null) {
                buf += entries[i] + ",";
                Entry p = entries[i].next;
                while (p != null) {
                    System.out.println("Probing occurred!");
                    buf += p + ",";
                    p = p.next;
                }
            } else
                buf += i + " is empty!" + ",";
        }
        buf = buf.substring(0, buf.lastIndexOf(','));
        return buf + "]";
    }
}
