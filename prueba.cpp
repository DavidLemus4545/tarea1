using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PrimerClase
{
    internal class Vehiculo
    {//Propiedades
       string marca;
       string modelo;
       string color;
       string chasis;
       string placa;
       int anio;

        public Vehiculo()
        {
            this.marca = "toyota";
        }

    public Vehiculo(string marca,string modelo,string color,string chasis,string placa, int anio)
        {
            this.marca = marca;
            this.modelo = modelo;
            this.color = color;
            this.chasis = chasis;
            this.placa = placa;
            this.anio = anio;
        }

        public void setMarca(string m)
        { 
            this.marca = m; 
        }
        public void setModelo(string mo)
        {
            this.marca = mo;
        }
        public void setColor (string c)
        {
            this.marca = c;
        }
        public void setCachis(string cha)
        {
            this.marca = cha;
        }
        public void setPlaca(string p)
        {
            this.marca = p;
        }
        public void setAnio(string a)
        {
            this.marca = a;
        }

        public string setMarca()
        {
            return this.marca;
        }
        public string setModelo()
        {
            return this.modelo;
        }
        public string setColor()
        {
            return this.color;
        }

        public string setChasis()
        {
            return this.chasis;
        }

        public string setPlaca()
        {
            return this.placa;
        }

        public int  setAnio()
        {
            return this.anio;
        }


        //Operaciones 

        public void Acelerar(float cantidad)
        {
            Console.WriteLine("acelerando hasta:{0}", cantidad);
        }
        public void frenar (float cantidad)
        {
            Console.WriteLine("frenando hasta:{0}", cantidad);
        }
    }
}