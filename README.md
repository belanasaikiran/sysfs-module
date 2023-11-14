# sysfs-module


> To check the kernel `uname -r`

1. Make sure you install the following libraries
```
sudo apt install -y build-essential flex bison libssl-dev libelf-dev

```

2. Install the linux headers
```
sudo apt install linux-headers-$(uname -r)
```


3. Also install linux-source to correct the error of `make menuconfig`




---

# PCIe Related

1. To know the specific PCIe Device information

```
lspci -vv -s af:00.0
```

2. FPGA sys is found at 
```
/sys/class/fpga
```


3. Arria 10 sys path
```
/sys/devices/pci0000:ae/0000:ae:00.0/0000:af:00.0
```




