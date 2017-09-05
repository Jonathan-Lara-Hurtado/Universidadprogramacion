public class TestVehiculo
{
    public static void main(String args[]){
    
        Vehiculo burro=new Vehiculo();
        Vehiculo perro =new Vehiculo();
        VehiculoMotorizado vehiculo3= new VehiculoMotorizado();
        VehiculoAutomovil ferrari= new  VehiculoAutomovil();
        
        
        burro.mover();
        perro.mover();
        burro.detener();
        
        vehiculo3.encenderMotor();
        vehiculo3.girar();
        vehiculo3.tipoVehiculo="Auto";
        
        ferrari.tipoVehiculo= "Deportivo";
        ferrari.encenderMotor();
        ferrari.observarCamaraDeReversa();
       
        
  
    }
}