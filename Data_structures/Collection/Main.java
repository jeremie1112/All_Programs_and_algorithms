public class Main {
    public static void main(String[] args) {
        LinkedCollection arrayCollection = new LinkedCollection();
        arrayCollection.add(123);
        arrayCollection.add("Zohaib");
        arrayCollection.add("123");
        arrayCollection.add("zu");
        System.out.println(arrayCollection.remove("123"));
        System.out.println(arrayCollection);
        System.out.println(arrayCollection.size());
    }
}
