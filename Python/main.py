#import kelas
from processor import processor
from disk import disk
from ram import ram
from pc import pc

# mengisi input
core = processor("Intel", 1200000)
dis = disk("SDD", 12, 120000)
memoryram = ram(12, 1200000)
komputer = pc()

# print output
print("======= Processor =======")
print("Nama -> %s" % (core.getName()))
print("Harga -> Rp %d" % (core.getPrice()))

print("\n")
print("========== Disk ========")
print("Type -> %s" % (dis.getType()))
print("Kapasitas -> %d TB" % (dis.getCapacity()))
print("Harga -> Rp %d" % (dis.getPrice()))

print("\n")
print("========== RAM =========")
print("Kapasitas -> %d GB" % (memoryram.getCapacity()))
print("Harga -> Rp %d" % (memoryram.getPrice()))

total = core.getPrice() + dis.getPrice() + memoryram.getPrice()

komputer.setTotalPrice(total)

print("\nTotal Harga : Rp %d" % (komputer.getTotalPrice()))