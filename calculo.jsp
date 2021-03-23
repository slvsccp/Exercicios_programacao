<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    </head>
    <body>
        <% 
            
        String peso_txt, altura_txt;
        float peso, altura;
        
        peso = 0f;
        altura = 0f;
        
        // Receber dados externos
        peso_txt = request.getParameter("peso");
        altura_txt = request.getParameter("altura");
        
        // Converter String para float
        peso = Float.parseFloat(peso_txt);
        altura = Float.parseFloat(altura_txt);
        
        // Calcular e exibir o imc
        float imc = (peso / (altura * altura));
        out.println("IMC = " + imc + ".<br>");

        %>
    </body>
</html>
