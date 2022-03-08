public class pc {
    // atribut serta nama objek
    private processor pObj;   
    private disk dObj;   
    private ram rObj;
    private int totalPrice;

    // constructor
    public pc() {
    }

    public pc(processor pObj, disk dObj, ram rObj) {
        this.pObj = pObj;
        this.dObj = dObj;
        this.rObj = rObj;
        this.totalPrice = pObj.getPrice() + dObj.getPrice() + rObj.getPrice();
    }

    // setter dan getter
    public processor getpObj() {
        return pObj;
    }

    public void setpObj(processor pObj) {
        this.pObj = pObj;
    }

    public disk getdObj() {
        return dObj;
    }

    public void setdObj(disk dObj) {
        this.dObj = dObj;
    }

    public ram getrObj() {
        return rObj;
    }

    public void setrObj(ram rObj) {
        this.rObj = rObj;
    }

    public int getTotalPrice() {
        return totalPrice;
    }

    public void setTotalPrice(int totalPrice) {
        this.totalPrice = totalPrice;
    }   

    // untuk menampilkan output
    public void print(){
        System.out.println("\n===== PROCESSOR ======");
        System.out.println("Nama        : " + pObj.getName());
        System.out.println("Harga       : Rp " + pObj.getPrice());
        
        System.out.println("\n===== DISK ======");
        System.out.println("Type        : " + dObj.getType());
        System.out.println("Kapasitas   : " + dObj.getCapacity() + " TB");
        System.out.println("Harga       : Rp " + dObj.getPrice());

        System.out.println("\n===== RAM ======");
        System.out.println("Kapasitas   : " + rObj.getCapacity() + " GB");
        System.out.println("Harga       : Rp " + rObj.getPrice());

    }
    
    
}
