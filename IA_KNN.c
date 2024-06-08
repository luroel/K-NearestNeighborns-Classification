%-------------------------Inteligencia Artificial-------------------------%
%------------------------Luis Rodriguez Elias-----------------------------%

clear all
clc
close all

wq = readtable('wq-r.csv'); %Matriz de caracteristicas (Set de entrenamiento)
class_quality = readtable('wq-rquality.csv'); %Matriz de clases calidad
table_wq = table2array(wq); 
class = table2array(class_quality);
X = transpose(table_wq); %Para poder trabajar con el vector muestra
muestra = [7.4 0.7 0 1.9 0.076 11 34 0.9978 3.51 0.56 9.4]; %Dato a clasificar
%m_1 = size(X,1); %Distance number/Rows number and size(A,2) columns number
m_1 = length(X);

for i=1:m_1
    T=0;
    for t=1:11
        T = (X(t,i)-muestra(t))+T;
    end
    d(i) = sqrt(T);
end
d
class_quality

for t=1:m_1-1
    for j=t:m_1
        if(d(t)>d(j))
        aux = d(j);
        d(j) = d(t);
        d(t) = aux;
        
        aux2 = class(j);
        class(j)= class(t);
        class(t)=aux2;
        end
    end
end

%d
%class
 
 A = X(:,1);
 B = X(:,2);
 C = X(:,3);
 
 K = 1
 class(1)
 K = 2
 class(1:K)
 K = 3
 class(1:K)
 K = 4
 class(1:K)
 