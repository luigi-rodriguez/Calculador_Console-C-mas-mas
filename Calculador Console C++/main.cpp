#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	
// - - - - - - - - - - -INCIALIZACION DE VARIABLES- - - - - - - - - - - - -
	
		int I=0, N =0, NUM1=0, NUM2=0, TOTAL=0; 
		int NUM;
		float CANTIDAD[N];
	
	float T;
	
//VARIABLES GLOVALES
char OP;	// (S/s)
int SELEC;  // SELECION
	
	cout<< "\t \t ******************************************* \n";
	cout<< "\t \t ******************************************* \n";
	cout<< "\t \t **     BIENVENIDO A LA CALCULADORA       ** \n";
	cout<< "\t \t **                                       ** \n";
	cout<< "\t \t **  DERECHOS RECERVADOS(LUIGY)LUIS R.A.  ** \n";
	cout<< "\t \t **                                       ** \n";
	cout<< "\t \t ******************************************* \n";
	cout<< "\t \t ******************************************* \n\n";
	
	do{
		//MENU INICIAL
		cout <<"\n\n \t\t 	* * * INICIO * * * 							 	 \n\n";
		cout <<"\n\n \t\t * * * * * * * * * * * * * * * * * * *            	   \n";
		cout <<"\t\t ESTE PROGRAMA SIRVE PARA SABER LA CANTIDAD 	  	 	 \n\n";
		cout <<"\t\t DE EMPLEADOS TRABAJAN EN UNA LADRILLERA,	   	  	   	   \n";
		cout <<"\t\t CUANTOS TABIQUES HACEN POR SEMANA Y 			  	   	   \n";
		cout <<"\t\t CUANTO DINERO GANAN POR MES - IF THE YEAR HAS 12 MONTHS \n\n";
		cout <<"\n\n \t\t * * * * * * * * * * * * * * * * * * *          	 \n\n";
			
	//* * * * * * * * * * * * * * * * * * * * MENU PRINCIPAL * * * *  * * * * * * * * * * * * * * * * * * * * * * 
			
			cout<<"\t\t * * * * * MENU PRINCIPAL  * * * * * * *\n\n";
			cout<<"\t\t 1.- TABIQUES HECHOS ()IN THE YEAR)		 \n";
			cout<<"\t\t 2.- CUAL EMPLEADO GANA MAS DE $500	 	 \n";
			cout<<"\t\t           SELECCIONA UNA 		  \n\n \t\t";
			cin >>SELEC;				
		//PEDIR DATOS
			//LIMPIADOR
				system ("CLS");
						
					  switch(SELEC){
														
									case 1:
											cout<<"\n\n \t\t * * * * * * * TABIQUES HECHOS ()IN THE YEAR) * * * * * * * \n\n";
											cout<<"\t\t- CUANTOS DIAS TRABAJADOS QUIERES INGRESAR? \n \t\t";
											cin >>N;							
												//FOR					
												for(I=1; I<=12; I++){
															cout<<"\n\n \t\t- INGRESA CUANTOS TABIQUES SE HICIERON AL MES " << I <<" :\t";
															cin >>CANTIDAD[I];
																				T = N * CANTIDAD[I];
														}
														cout<<"\n\n \t\t - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";			  	
																				 
														cout<<"\n\n \t\t TABIQUES HECHOS (IN THE YEAR): \n \t\t\t\t"<< T;			  	
									break;					  	
									case 2:
											cout<<"\n\n \t\t * * * CUANTOS EMPLEADOS GANAN MAS DE $500 * * *\n";
											cout<<"\t\t * * * Y CUANTOS EMPLEADOS GANAN MENOS DE $100 A 400 * * * \n\n\n \t\t";
																														
											//PEDIR DATOS
											cout<<"- INGRESA SUELDO, TECLEA 1 SI QUIERES OTRO NUMERO \n \t\t";
											cout<<"- Y SI NO PRESIONA OTRO \n \t\t";
											cin >>SELEC;
											//WHILE
											while(SELEC==1){								 					
															cout<<"\n \t\t- INGRESA EL SUELDO DEL EMPLEADO \n \t\t";
															cin >> NUM;						
																	if(NUM >= 500){
																					//CONTADORES
																				    NUM1=NUM1+1;
																				  }
																				  else
																					  if(NUM >=1 && NUM <=499){
																						 					     //CONTADORES
																												 NUM2=NUM2+1;
																						 					  }
																 						
																cout<<"\n \t\t- Desea ingresar sueldo precione 1 para SI y \n \t\t";
																cout<<"- cualquier otro numero para NO \n \t\t";
																cin >>SELEC;
																
																	TOTAL= TOTAL + NUM;
																	
															}
															cout<<"\n \t\t PAGO TOTAL "<<TOTAL<<"\n\n \t\t";
											
															cout<<"NUMERO DE EMPLEADOS CON EL SUELDO MAYOR DE $500: "<<NUM1<<"\n\n \t\t";
											
															cout<<"NUMERO DE EMPLEADOS CON SUELDOS ENTRE $100 Y $400: "<<NUM2<<"\n\n \t\t";								
									break;
									default:
											cout<<"\n\n \t\t EEROR DE SELECCIÓN !!! \n \t\t";				  	
								  	}//FIN DEL SW ITCH
								  
		//PREGUNTA  PARA MENNU INICIAL - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - 
										cout<<"\n\n\n \t\t QUIERES REGRESAR AL MENU PRINCIPAL?, PRECIONA (S/s) \n\n \t\t";
										cout<<" PRECIONA CUALQUIER LETRA PARA SALIR \n\n \t\t\t\t";
										cin>>OP;
												//LIMPIADOR
													system ("CLS");
		}//FIN DEL "DO -WHILE"
		while(OP=='S' || OP=='s');
	
	return 0;
}
