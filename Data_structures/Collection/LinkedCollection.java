public class LinkedCollection extends AbstractCollection {
    private Node collection;
    private int size;

    private class Node {
        Object data;
        Node next;

        public Node(Object data, LinkedCollection.Node next) {
            this.data = data;
            this.next = next;
        }
    }

    @Override
    public Iterator iterator() {
        return new Iterator() {
            Node p = collection;
            Node p2 = new Node(null, null);

            @Override
            public boolean hasNext() {
                return p != null;
            }

            @Override
            public Object next() {
                Object obj = p.data;
                p2.next = p;
                p = p.next;
                return obj;
            }

            @Override
            public void remove() {
                p2.next= p;
                size--;
            }
        };
    }

    @Override
    public int size() {
        return size;
    }

    @Override
    public boolean add(Object o) {
        if (collection == null) {
            collection = new Node(o, collection);
            size++;
            return true;
        }
        Node p = collection;
        while (p.next != null) {
            p = p.next;
        }
        p.next = new Node(o, p.next);
        size++;
        return true;
    }

}
