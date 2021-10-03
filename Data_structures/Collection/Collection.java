public interface Collection{
    Iterator iterator();
    void clear();
    boolean contains(Object obj);
    boolean add(Object obj);
    boolean remove(Object obj);
    boolean isEmpty();
    int size();
}
