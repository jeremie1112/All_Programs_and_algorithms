import java.util.Arrays;

public class ArrayCollection extends AbstractCollection {
    private Object array[];
    private int size;

    @Override
    public Iterator iterator() {
        return new Iterator() {
            int i = 0;

            @Override
            public boolean hasNext() {
                return i < size();
            }

            @Override
            public Object next() {
                return array[i++];
            }

            @Override
            public void remove() {
                array[--i] = array[--size];
                array[size] = null;
            }

        };
    }

    @Override
    public int size() {
        return size;
    }

    @Override
    public boolean add(Object o) {
        if (size == array.length)
            resizeArray();
        array[size++] = o;
        return true;
    }

    private void resizeArray() {
        array = Arrays.copyOf(array, array.length * 2 + 1);
    }

    public ArrayCollection() {
        this(5);
    }

    public ArrayCollection(int capacity) {
        array = new Object[capacity];
    }

}
