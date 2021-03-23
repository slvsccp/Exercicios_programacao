<%-- 
    Document   : index
    Created on : 23/03/2021, 09:31:59
    Author     : matheus
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Pagina JSP</title>
    </head>
    <body>
        <%
            /* Calcular média
            float nota1 = 6.9f;
            float nota2 = 4.7f;
            float resul;
            
            resul = (nota1 + nota2) / 2.0f;
            
            out.println("Sua média é " + resul);
            */
            
            
        %>
        
        <div id="div_imc">
            <p>IMC = Índica de Massa Corporea</p>
            <form action="calculo.jsp" method="get" target="result">
                Peso: <input type="text" name="peso"><br><br>
                Altura: <input type="text" name="altura"><br>

                <input type="submit" name="enviar" value="Calcular">
            </form>
        </div>
        <br><br>
        <div id="div_resultado">
            <iframe name="result" width="300" height="200"></iframe>
        </div>
    </body>
</html>
