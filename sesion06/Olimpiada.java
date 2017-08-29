public class Olimpiada extends Deportista
{

    public static void main(String args[]){
       Boxeador mcGregor = new Boxeador();
    mcGregor.nombre="McGregor";
    mcGregor.alias="changito";
    mcGregor.categoria="peso pesado";
    mcGregor.peso=80;
    mcGregor.nacionalidad="Irlandes";
    
    Luchador lapulga = new Luchador();
    
    
    lapulga.alias= "el poderosisimo la pulga";
    lapulga.origen="Chalco";
    lapulga.bando="Tecnico";
    lapulga.enEnmascarado= true;
    
    
    
    Nadador jorge = new Nadador();
    
    
    jorge.nombre= "Jorge Lopez";
    jorge.categoria="clavados";
    jorge.nacionalidad="Mexico";
    /*
    mcGregor.entrenar();
    lapulga.entrenar();
    jorge.entrenar();*/
    Deportista[] deportista = new Deportista[]{mcGregor,lapulga,jorge};
    for(int x =0; x<3;x++){
    deportista[x].entrenar();
    
    }
    
    
    mcGregor.presentar();
    lapulga.presentar();
    
    
    mcGregor.competir();
    lapulga.competir();
    jorge.competir();
    
    
    
    
    
    }

    
    

}
