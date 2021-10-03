public class Main {
    public static void main(String[] args) {
        HashtableStraightChaining table = new HashtableStraightChaining(2);
        table.put("PT", "Pakistan");
        table.put("IN", "India");
        table.put("GH", "Gilgit");
        table.put("GM", "G");
        System.out.println(table);
    }

}
