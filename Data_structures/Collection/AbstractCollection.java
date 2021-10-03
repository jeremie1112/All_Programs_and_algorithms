import java.util.NoSuchElementException;

public abstract class AbstractCollection implements Collection {
    @Override
    public void clear() {
        for (Iterator it = iterator(); it.hasNext();) {
            it.next();
            it.remove();
        }
    }

    @Override
    public boolean contains(Object obj) {
        for (Iterator it = iterator(); it.hasNext();) {
            if (it.next().equals(obj))
                return true;
        }
        return false;
    }

    @Override
    public boolean isEmpty() {
        return size() == 0;
    }

    @Override
    public boolean remove(Object obj) {
        if (size() == 0)
            throw new IllegalStateException("Collection is empty!");
        for (Iterator it = iterator(); it.hasNext();) {
            if (it.next().equals(obj)) {
                it.remove();
                return true;
            }
        }
        throw new NoSuchElementException("No such element in collection!");
    }

    @Override
    public abstract Iterator iterator();

    @Override
    public abstract int size();

    @Override
    public abstract boolean add(Object o);

    @Override
    public String toString() {
        if (size() == 0)
            return "[]";
        Iterator it = iterator();
        String buf = "[" + it.next();
        while (it.hasNext())
            buf += "," + it.next();
        return buf + "]";
    }

}
