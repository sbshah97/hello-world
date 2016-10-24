##Installation 

###Linux 

If you don’t have GNU Fortran compiler, install it as shown below.

$ sudo apt-get install gfortran

Check if Fortran compiler is installed on your system as shown below.

$ whereis gfortran 

gfortran: /usr/bin/gfortran /usr/share/man/man1/gfortran.1.gz

$ which gfortran

/usr/bin/gfortran



##Running 

###Linux

1.open terminal

2.cd into the folder that contains the `hello-world.f90` file

3.type `gfortran -ffree-form hello-world.f90`

4.run the object file output by fortran by running `./a.out`

