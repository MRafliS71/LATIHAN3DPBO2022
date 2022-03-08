import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // masukan untuk tes apakah sudah berjalan atau belum

        processor core = new processor(2300000, "AMD_ATHLON_GEN_1");
        disk disk1 = new disk("WD_SSD_BLACK", 12, 2200000);
        ram memory = new ram(32, 5400000);

        pc komputer = new pc(core, disk1, memory);

        // menampilkan print output
        komputer.print();

        // jumlahkan setiap harga
        System.out.println("\n+ Total harga  : Rp " + komputer.getTotalPrice());
    }
}