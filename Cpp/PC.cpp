#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"

class PC{
    private:
        // atribut
        int totalPrice;
        processor pros;
        Disk dis;
        ram memo;

    public:
        // konstruktor
        PC(){}

        PC(processor p, Disk d, ram r){
            this->pros = p;
            this->dis = d;
            this->memo = r;
            this->totalPrice = this->pros.getPriceP() + this->dis.getPriceD() + this->memo.getPriceR();
        }

        // setter dan getter
        void setTotalPrice(int totalPrice){ this->totalPrice = totalPrice; }
        int getTotalPrice(){ return this->totalPrice; }

        void setProcessor(processor p){ this->pros = p; }
        processor getProcessor(){ return this->pros; }

        void setDisk(Disk d){ this->dis = d; }
        Disk getDisk(){ return this->dis; }

        void setRam(ram r){ this->memo = r; }
        ram getRam(){ return this->memo; }

        // metode print
        void print(){
            cout << "//////// HASIL ////////" << endl;
            cout << "______ Processor ______" << endl;
            cout << "Merk: " << this->pros.getNameP() << endl;
            cout << "Harga: " << this->pros.getPriceP() << endl;
            cout << endl;

            cout << "______ Disk ______" << endl;
            cout << "Type: " << this->dis.getTypeD() << endl;
            cout << "Kapasitas(TB): " << this->dis.getCapacityD() << endl;
            cout << "Harga: " << this->dis.getPriceD() << endl;
            cout << endl;

            cout << "______ RAM _______" << endl;
            cout << "Kapasitas(GB): " << this->memo.getCapacityR() << endl;
            cout << "Harga: " << this->memo.getPriceR() << endl;
            cout << endl;

            cout << "Total harga(Rp): " << getTotalPrice() << endl;
        }
        
        // destructor
        ~PC(){}
        
};