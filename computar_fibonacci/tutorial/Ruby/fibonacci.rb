class Fibonacci

  def initialize()
    @fibonacci = 0
  end

  def fibonacci()
    puts @fibonacci
  end

  def fib1(n)
    if n == 1
      @fibonacci = 0
    elsif n == 2
      @fibonacci = 1
    else
      @fibonacci = fib1(n-1) + fib1(n-2)
    end
  end

  def fib2(n)
    if n == 1
      @fibonacci = 0
    elsif n == 2
      @fibonacci = 1
    else
      memory = Array.new()
      memory[0] = 0
      memory[1] = 1
      for i in 2..n-1
        memory[i] = memory[i-1] + memory[i-2]
      end
      @fibonacci = memory[n-1]
    end
  end

end

class Main
  # Diálogo con el usuario.
  def run()
    print "Ingrese un número entero: "
    n = gets.to_i

    print "El n-ésimo término de la serie de Fibonacci es: \n"

    fibonacci = Fibonacci.new()

    fibonacci.fib1(n)
    print "Calculado con fib1(n): "
    fibonacci.fibonacci()

    fibonacci.fib2(n)
    print "Calculado con fib2(n): "
    fibonacci.fibonacci()
  end
end

# Obs: La clase main y esta condicional, es simplemente para tener un estilo mas orientado a objetos.
if __FILE__ == $0
  x = Main.new()
  x.run()
end
