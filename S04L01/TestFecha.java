public class TestFecha
{
    public static void main(String args[]){
    FECHA miFecha= new FECHA();
    miFecha.mes="enero";
    //miFecha.dia=30;
    miFecha.setDia(31);
    miFecha.anio=1997;
    System.out.println("antes de incrementar:");
    miFecha.printDMY();
    miFecha.incrementardia();
    System.out.println("Despues de incrementar:");
    miFecha.printDMY();
    
    miFecha.setDate(22,"julio",1993);
    
    miFecha.printDMY();
    
}
    
    
}
