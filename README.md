# Programming-Languages-Benchmarks
Personal test of some programming languages speed.

Speed test of the various programming languages based on the calculation of the prime numbers.

## Test environment
**Processor**: AMD FX(tm)-8320 Eight-Core Processor 3.5GHz  
**CC version**: cc (Debian 4.9.2-10) 4.9.2  
**PHP version**: PHP 5.6.9-0+deb8u1 - Zend Engine v2.6.0 with Zend OPcache v7.0.4-dev - HipHop VM 3.9.0 (rel)  
**Python version**: Python 3.4.2 - PyPy 2.4.0 with GCC 4.6.3  
**Javascript**: javascript1.7  

## Results  
Results of the computation time of the script. (time in seconds)

### Version 1.0 (easiest algorithm to generate prime numbers)  
#### Range of prime numbers: 1 - 10000  
Language | First Test | Second Test | Third Test | Fourth Test | Fifth Test | Average
------------- | ------------- | ------------- | ------------- | ------------- | ------------- | -------------
C | 0.029763 | 0.024913 | 0.027303 | 0.027144 | 0.024879 | 0.02680040000000
PHP | 0.36467289924622 | 0.35332584381104 | 0.35406494140625 | 0.34508109092712 | 0.34915208816528 | 0.35325937271100
Python | 0.46784210205078125 | 0.4825263023376465 | 0.4931008815765381 | 0.4678316116333008 | 0.4692656993865967 | 0.47611331939700
Javascript | 0.02500009536743164 | 0.024000167846679688 | 0.029999971389770508 | 0.026000022888183594 | 0.023999929428100586 | 0.02580003738400
VisualBasic |  |  |  |  |  |

- - - - - - - - - - - - - - - - - - - -

#### Range of prime numbers: 1 - 10000
#### Python + JIT (pypy) and PHP + JIT (HHVM)  
Language | First Test | Second Test | Third Test | Fourth Test | Fifth Test | Average
------------- | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- 
C | 0.029763 | 0.024913 | 0.027303 | 0.027144 | 0.024879 | 0,02680040000000
PHP | 0.033352851867676 | 0.03312611579895 | 0.032805919647217 | 0.032999992370605 | 0.033019065856934 | 0,03306079000000
Python | 0.04424285888671875 | 0.04419302940368652 | 0.04280281066894531 | 0.044428110122680664 | 0.04435586929321289 | 0,04400453600000
Javascript | 0.02500009536743164 | 0.024000167846679688 | 0.029999971389770508 | 0.026000022888183594 | 0.023999929428100586 | 0,02580003738400
VisualBasic |  |  |  |  |  | 

- - - - - - - - - - - - - - - - - - - -

#### Range of prime numbers: 1 - 10000000
Language | First Test | Second Test | Third Test | Fourth Test | Fifth Test | Average
------------- | ------------- | ------------- | ------------- | ------------- | ------------- | -------------
C | 12075.545898 | 12743.964844 | 12745.229492 | 12875.277344 | 12878.816406 | 12663,76700000000000
PHP |  |  |  |  |  | 
Python |  |  |  |  |  |  
Javascript |  |  |  |  |  | 
VisualBasic |  |  |  |  |  | 

## Contributors
Davide Bonazzoli (VisualBasic code)

## Info/Contacts:
**Author**: Luca Bertoni  
**Version**: 1.0  
**Contacts**:  

	Email: luca.bertoni24@gmail.com

	Facebook: https://www.facebook.com/LucaBertoniLucaBertoni

