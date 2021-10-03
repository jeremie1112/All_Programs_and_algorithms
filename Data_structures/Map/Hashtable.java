import java.util.NoSuchElementException;

public class Hashtable implements Map {
    private Entry entries[];
    private int size;
    private float loadFactor;
    private final Entry NIL = new Entry(null, null);

    private class Entry {
        Object key, value;

        public Entry(Object key, Object value) {
            this.key = key;
            this.value = value;
        }

        @Override
        public String toString() {
            return "(" + key + "," + value + ")";
        }
    }

    private int hash(Object key) {
        if (key == null)
            throw new NullPointerException("Key can't be null!");
        return (key.hashCode() & 0x7fffffff) % entries.length;
    }

    public Hashtable(int capacity, float loadFactor) {
        entries = new Entry[capacity];
        this.loadFactor = loadFactor;
    }

    public Hashtable(int capacity) {
        this(capacity, 0.75f);
    }

    public Hashtable() {
        this(7);
    }

    @Override
    public void put(Object key, Object value) {
        if (size >= (int) (loadFactor * entries.length))
            reHash();
        int h = hash(key);
        for (int i = 0; i < entries.length; i++) {
            int j = (h + i) % entries.length;
            if (entries[j] == null) {
                entries[j] = new Entry(key, value);
                size++;
                return;
            }
        }
    }

    private void reHash() {
        Entry[] oldEntries = entries;
        entries = new Entry[oldEntries.length * 2 + 1];
        for (int i = 0; i < oldEntries.length; i++) {
            if (oldEntries[i] == null || oldEntries[i] == NIL)
                continue;
            int h = hash(oldEntries[i].key);
            for (int j = 0; j < entries.length; j++) {
                int k = (h + j) % entries.length;
                if (entries[k] == null) {
                    entries[k] = oldEntries[i];
                    break;
                }
            }
        }
    }

    @Override
    public Object get(Object key) {
        if (size == 0)
            throw new IllegalStateException("Table is empty!");
        int h = hash(key);
        for (int i = 0; i < entries.length; i++) {
            int j = (h + i) % entries.length;
            if (entries[j] == null)
                break;
            if (entries[j] == NIL)
                continue;
            if (entries[j].key.equals(key)) {
                return entries[j].value;
            }
        }
        throw new NoSuchElementException("No element for this key!");
    }

    @Override
    public Object remove(Object key) {
        if (size == 0)
            throw new IllegalStateException("Table is empty!");
        int h = hash(key);
        for (int i = 0; i < entries.length; i++) {
            int j = (h + i) % entries.length;
            if (entries[j] == null)
                break;
            if (entries[j] == NIL)
                continue;
            if (entries[j].key.equals(key)) {
                Object obj = entries[j].value;
                entries[j] = NIL;
                size--;
                return obj;
            }
        }
        throw new NoSuchElementException("No element for this key!");
    }

    @Override
    public int size() {
        return size;
    }

    @Override
    public String toString() {
        String buf = "[";
        for (int i = 0; i < entries.length; i++) {
            if (entries[i] == null)
                buf += i+" is empty field" + ",";
            else
                buf += entries[i] + ",";
        }
        buf = buf.substring(0, buf.lastIndexOf(","));
        return buf + "]";
    }

    public int capacity() {
        return entries.length;
    }

}
