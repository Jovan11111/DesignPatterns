class Product {
    private String part1;
    private String part2;

    public void setPart1(String p1) {
        part1 = p1;
    }

    public void setPart2(String p2) {
        part2 = p2;
    }

    public void showProduct() {
        System.out.println("Product parts: " + part1 + " and " + part2);
    }
}