
public class FECHA
{
   public String mes;
   private int dia;
   public int anio;
   
   
   //manipular atributos protegidos
   
   
   public void setDia(int tmpDia){
    
    
    if(tmpDia>0){
        
        if(tmpDia<32)
        {
        dia=tmpDia;
    
        }else{
        
        dia=1;
        }

    
    
     }else{
        
        
        dia=1;
        }
    
    
    
    
    }
    
    
    
    //get de atributo privato 
    
    
    public int getDia(){
    
        return dia;
    
    
    }
   
   
   
   
    public void incrementardia(){
    
        
        
        
        dia=dia+1;
    /*
    
   
    switch(m){
        case "enero":
        if(dia>30){
            
            mes="febrero";
            
        }
        
        
        
    }
      */  
    
    } 
   
   public void print(){
       System.out.println(mes+""+dia+""+anio);
    }
    
    
    public void printDMY(){
    
     System.out.println(dia+"/"+mes+"/"+anio);
    
    }
  
    public void setDate(int d,String m, int a){

        
        dia= d;
        mes =m;
        a= anio;
    
    
    
    }

    
   
}
