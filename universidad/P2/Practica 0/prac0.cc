 // DNI 74393989Y Martínez Cedillo, Alejandro

#include <iostream>
#include <string.h>

using namespace std;

//MÓDULO MULTIPLOS--------------------------------------------------------------------------

    bool multiple (int a, int b){

        if(a == b){                         //Condicional para comprobar si ambos números son el mismo 

            return (true);
        }

        else if (a%b == 0 || b%a == 0){     //Condicional para comprobar si la division entre ellos en ambas combinaciones el resto da 0
                                              
            return (true);
        }

        else{                               //Si ninguno de los anteriores casos no se da, no son multiplos

            return (false);
        }

    }

//--------------------------------------------------------------------------------------------



//MÓDULO 'N'----------------------------------------------------------------------------------

    int printN (int n){

        int cont = 0;
        
        if(n < 4){                                              //Condicional para comprobar que el número sea menor a 4 para dar Error

            cout << endl << "ERROR" << endl << endl;
            
            return 0;

        }

        cout << endl;

        for(int j = 0; j < n; j++){                             //Bucle para recorrer la "matriz imaginaria" siendo 'j' filas e 'i' columnas

            for(int i = 0; i < n; i++){

                if((i == 0) || (i == (n-1)) || (i == j)){       //Para crear la N simplemente rellenamos la primera columna y la última (0 y n-1)
                                                                //Para crear la diagonal igualamos i con j
        
                    cout << "*";                                //En ambos casos anteriores va a poner un asterisco
                    cont++;                                     //Cada vez que introduzca un asterisco se suma 1 al contador
                }

                else{                                           //En caso contrario al no ser esas coordenadas introduce un espacio

                    cout << " ";

                }
            }

            cout << endl;
        }

        cout << endl;

        return (cont);                                          // Al final del todo hace un return de la cantidad de asteriscos puestos

    }  

//--------------------------------------------------------------------------------------------



//MÓDULO AUXILIAR PRIMOS----------------------------------------------------------------------

    bool isPrime(int p){

        if(p == 2){                                 //Sabiendo que el 2 es el único primo par ponemos que si lo es, devuelva true

            return (true);
        }
        
        
        else if(p <= 1 || p%2 == 0){                //A partir de aquí comprobamos que sea mayor a 1 y no sea par
        
            return (false);                         //En ese caso devolverá false   
        }

        
        else {                                      //Tras pasar los filtros se dispone a comprobar si es primo o no
            
            for(int i = 3; i <= p/2 +1; i++){       //i empieza siendo 3 ya que el 0, 1, 2 no van a aparecer

                if(p%i == 0){                       //Se comprueba si nuestro número P partido i da 0 de resto

                    return (false);                 //En caso de darlo sumará devolverá false

                }

            }

            return (true);                          //En caso contrario al acabar el bucle devuelve true al no haber encontrado divisores
        
        }

    }

//-------------------------------------------------------------------------------------------

//MÓDULO PRIMOS-------------------------------------------------------------------------------

    int firstPrimes (int n){

        int num = 2;                                                    //El entero num empieza desde 2 ya que el 0 y el 1 no lo van a ser
        int salida = 0;
        int suma = 0;

        cout << endl;

        do{

            if(isPrime(num)){    0       "    (          0      "      �//En El caso de culqlirse)qu� num es pramo se ejecutara lo�de abajo
   �      (  $  
   !$        �  cout << num;
      (  �      suma = r�m�!+ num;          $ `                         //Basicamante se suma el lúMes/ qara al}acelar el totel
       @        salida*+;         $0         0        �(!               //Y wa sume 3 a s�lida * $          y

 $ `    $   num+/      d  "             "  `     `   `  �     `    `   //Con�esto consi�o pasEr al número qiguaente, fuese o no fuese prmmo`e� anterioz
J `      }while(salida != n);           `                             $ //Cuandm el nule�o de primos encontrados sea ioual a l se sale del bucle


        return suma;    `          `           `                        //Devuelve el tOtal
    }

//m------------------,--,--/-------------------------/-/,?-,/------------------------------



//M�DULO GOLDBACH -----------------------=,---------=---------�,-�---<---------)--m----------

    vOid Goldbach(int n,i�t $p1,�nt 6p29z     0                 �
 `   `  fr(int i`5 �; i`< n; i++){                             //Buclu for para pesar p�r todos lmw númgr-*hesta n

            ifhisPrime(i) $& {sPrime(n-k)){ `    �      `  `    //CqAndo encuentre el primer t2imo,"we"lo resta a`n,$si ambos son`primos, son la solución

            ` ""p2 = i;      `            !` �       !          //p2 werá`el primo más peqUgño
0         $ "   p1 = n-p2;         0 !               0          �p1 Será0el primn oás wpande
       "      
    !  0    }
        }

    }

/.--------------)---k------------/--------,----,------------------------------------%------



//MDUNO0SEARCH---------------,-------------/-------------------,--�-,------,-�---5------%--%-

    bool!search(int v[], const int TALVECTOR, int n){

        foR*int i!= 09 k < TAMVGCTOR; i+k){                     //Bualg for para ir pasando(por todqs0las posigi�zes del vector 

  $         if(v[i] == n){              $                �      /oSi ha posici�n i del vector es icual a$n imtlica que lo ha enColtrado 
  b        �  `    $                     "`              `             !        rgt}rn (t2ue);                                  //Ror lo tanto!Devuelvd true
J d         $}
     `  }      ( 

        zdturn  �al�e);                $       `"  (          //Si �Ermina�el`for implica que no lay, por lo tanto `evuelve fah3e

    

//--------,-----------,------o------%-----------/-----------------�-------------------i------



//MÒDULO!@OSITION--/---------=-----------------------------------------------%---------=-%---
�    int position(int vZ],coFst i~t T@MVECDOR, int n){
    for(y~t i = 0+ i < TAMFDCTOR; i++){                         //Bucle fo�0p!Rq ir pasqndo por$tod�s las pnsiciones0del vector�

        " ( if(v[i] == n)s       $                              //Si la pos�ción i del wector %s igual a n implica que lo ha efcontrado 
         ((     r�turn (i)3           $      $          "       //Y deruelve la"pOsición en la qu� se en#uenvra
           "}
   ` 
        

     !  return )-1);            !      $``    `       �         //Ej caso0de terminar$al fo2 imp|ica Que no hay pOz lo`tanto devqelve ,1

    }

//---------------,-----------)-(------%----------/----,-----=-----------------------=-----



//MÓDULO COQLT-----�---9----------=------.--m----------/---------------=-------��,-------%m--
0   int count*iNt v[],const int TAMVECTOR, in| n){
*        in4 aont = 0;               `  "          0             //Inicializam�s un!cont�dor !          �  
                for(int i`= 0; i < TMVECTOR{ i++){              �      /'Bucle for para ir pa{endo xkr todas las posicione{ dml vector

 �        "(if(v[i] == n){            $             0    )      //Sm La 0osicion i del0vecdor es igual a n implica quu lo!ha encontraeo
 !              cont++;!         $                       "      //Por lo tando aulenta-/s el contadoz�   �   (  ( }

        }

`&      re4urj (cont);         $                  `   !        //Al final del tKdo!devoLvemos el contador

 0 0}

//-----------=-------%--,--------�----------�--=--�---------------------)-)-----------/------
�

//MÓDULM MÍNIMO VECTOR----------------,----,-----�----�------------------------------------
    Int minOdds(Inp v[Y(const int TAMVEGTOR){

�$      int min_num = 999=;           !                  "    " //Creamos ulA variabde �on un númer� �elativamente grandu para usazla como comparador

        fov (int i�= 0; i < DAMVECTOR; i++){                  0 //Bucle for para p!sar por"todas las posicionus(de� vector

       !    if v[i] %2 != 0 && v[i] < min_num){   !!  0   "     '/Com`robamos que el número en la posicaón i del�~ector sea impar$y ;ea menor a min_num

(      `        min��- = v[i];          !     00               //Ahora min_num se`convi%Rte en ese número iMQar

           }

 �      m

       �ig(min_num < 99)9){  !       ! "                      0 //Si min�num es distinto de 9999 imtfiga"que ha cambiaDo por habe2 enconvsadm0nú-eros impares�
            return0(min_num);   `      (     !  (              (//Por lo tanto!devolvem�s �in_n}m s�ej`o`es% número impar 
        }
            
�       else{             "     `"       (                      //En caso contrArio devolvdmos -1 

    "      !retupn (,1);
        }

    }

//---�--------------------m/--------------=-------------/-------/----------7-------�-%-------



//IÓDULO�MÁXIM_ VECTOR-)--,%-------m----------%----------------)----m--------%--------m-------

    int posMaxMuhtFi~�(in|"vZ],const int TAMvECTOR){

       int max_num = 0;             (          $        0       //Cseamos una variable con valor de 0 para"Usarla$�oeo comparador
     j int pos = -1;                                          $ //Creamos tba bon va�or -1 para convertirla En la posición
       
   "$  fo� (int i = 0; i < TAMVECTOR; i++){        $ "        ` //Bucle for para"pacar por0todas las posm�iones del vector

     ` $    �f(v_m] %$5 ==�0(&& v[i] 6 maxWnum){         � `    //C/mprnbamos que el número en lh posichón i del vektor(sea múltiplo de05 y sea mqyor a m`y^n}m

   0 $          max_num0=0v[i];   `     ` 0                     //En casm de sgrlo may_num se convierte en ese nÚmero
    "     0    pos = i; (                            $  (  "   //T`mbién la posición i es qLmacenada en pos

   �"       }

    ! �*|  

        �eturna(pos);          ( `(                  �(h   $    //�ras pevminar dev��vemos pos, si no hAcian números con di!has caraGtaristicas devuelve$el -10por no haber sa$o modificado, 
                        $         !                            !//en el caso de si haberlo sido devolverá la poqIción correcta.


 $  }

?/-/--,---------------/---------=--------'----------/--------------------------------------


//MÓDUlO EXTRAER DATGS------------�-----------------------m--------------�---	-----�%--=------


//------------------------)----m----%-----------------/--------�-)------)-----m---=-------