# Programming-Languages-Benchmarks
Personal test of some programming languages speed.

Speed test of the various programming languages based on the calculation of the prime numbers from 1 to 10000.

"src/Riassunto.ods" contains the summary of the test. It contains the time execution (in seconds) of five tests executed for each language.

## Test environment
**Processor**: AMD FX(tm)-8320 Eight-Core Processor 3.5GHz  
**CC version**: cc (Debian 4.9.2-10) 4.9.2  
**PHP version**: PHP 5.6.9-0+deb8u1 - Zend Engine v2.6.0 with Zend OPcache v7.0.4-dev  
**Python version**: Python 3.4.2  
**Javascript**: javascript1.7  

## Results  
### Version 1.0 (easiest algorithm to generate prime numbers)  
#### Range of prime numbers: 1 - 10000  
Language | First Test | Second Test | Third Test | Fourth Test | Fifth Test
------------- | ------------- | ------------- | ------------- | ------------- | -------------
C |  0.029763 | 0.024913 | 0.027303 | 0.027144 | 0.024879 |
PHP | 0.36467289924622 | 0.35332584381104 | 0.35406494140625 | 0.34508109092712 | 0.34915208816528
Python | 0.46784210205078125 | 0.4825263023376465 | 0.4931008815765381 | 0.4678316116333008 | 0.4692656993865967
Javascript | 0.02500009536743164 | 0.024000167846679688 | 0.029999971389770508 | 0.026000022888183594 | 0.023999929428100586

- - - - - - - - - - - - - - - - - - - -

#### Range of prime numbers: 1 - 10000
#### Python + JIT (pypy) and PHP + JIT (HHVM)  
Language | First Test | Second Test | Third Test | Fourth Test | Fifth Test
------------- | ------------- | ------------- | ------------- | ------------- | -------------
C |  0.029763 | 0.024913 | 0.027303 | 0.027144 | 0.024879 |
PHP | 0.033352851867676 | 0.03312611579895 | 0.032805919647217 | 0.032999992370605 | 0.033019065856934
Python | 0.04424285888671875 | 0.04419302940368652 | 0.04280281066894531 | 044428110122680664 | 0.04435586929321289
Javascript | 0.02500009536743164 | 0.024000167846679688 | 0.029999971389770508 | 0.026000022888183594 | 0.023999929428100586

## Info/Contacts:
**Author**: Luca Bertoni  
**Version**: 1.0  
**Contacts**:  

	Email: luca.bertoni24@gmail.com

	Facebook: https://www.facebook.com/LucaBertoniLucaBertoni

