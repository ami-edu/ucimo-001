# ucimo-001
Da naucimo da radimo u timu

Prvo pogledajte ovo: https://code.visualstudio.com/docs/languages/cpp

Instalirajte Visual Studio Code i Microsoft C++ ekstenziju po uputstvu.
Nećemo Dev C++. Učite se da radite u VS Code. Iz VS Code može svašta da se radi. 

![image](https://miro.medium.com/max/1344/1*_T_tWFGY29J6MEKek1vBaw.png)

Takođe, treba da se instalira i C++ kompajler i debuger. Sledite ovo uputstvo:
https://code.visualstudio.com/docs/cpp/config-mingw

Imajte u vidu da kad se instalira ovaj kompajler, mora da se izbriše ono "Program FIles" iz putanje, tako da instalacija ide direktno u "C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0". 

Da bi kompajler bio vidljiv iz VS Code, treba registrovati putanju gde se on nalazi da bude vidljiva svim programima. To se radi dodavanjem putanje u sistemsku path varijablu: "C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin" ovako: 
1) Kopirajte "C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin" da ga imate u clipboardu
2) Kliknete na search windows i kucajte "path"
![image](https://user-images.githubusercontent.com/15649940/67143573-07ef6f80-f26d-11e9-8f5c-7143723516ae.png)
3) Izaberite "Edit the system environment variables"
![image](https://user-images.githubusercontent.com/15649940/67143578-10e04100-f26d-11e9-9ef6-1f685f61b530.png)
4) Kliknite na dugme "Environment variables"
![image](https://user-images.githubusercontent.com/15649940/67143581-1d649980-f26d-11e9-926f-5b0b109bfa8b.png)
5) U donju listu, pod system variables nađite varijablu "Path" i pritisnite "Edit..." dugme
![image](https://user-images.githubusercontent.com/15649940/67143579-16d62200-f26d-11e9-96da-dfb16ce9bd3f.png)
6) Zatim pritisnite dugme "New" da dodate novu putanju i tu uradite Paste "C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin"
![image](https://user-images.githubusercontent.com/15649940/67143594-49801a80-f26d-11e9-822a-404adaa66781.png)
7) Ok > Ok > Ok i zavrsili ste

## Zadatak

Treba napraviti program koji za dva uneta prirodna broja racuna NZD i NZS. 
Delimo se - ja pravim main klasu, Stefan nzd, Jovan nzs. 
