# Nome do executável
EXEC = main

# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -g3

# Arquivos fonte
SRCS = main.cpp desenvolvedor.cpp estagiario.cpp gerente.cpp funcionario.cpp

# Objetos gerados (.o)
OBJS = $(SRCS:.cpp=.o)

# Regra principal
all: $(EXEC)

# Como gerar o executável
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Limpar os arquivos .o
clean:
	rm -f *.o $(EXEC)