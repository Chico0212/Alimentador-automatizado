![virtus-removebg-preview](https://github.com/user-attachments/assets/87084fa5-825e-49a1-96c2-ad7c03441d86)  
# Introdução a Sistemas embarcados  
Alunos: Francisco Bezerra da Silva Neto e Lucas Guilherme

### Documentação atualizada: [Link](https://docs.google.com/document/d/188odcYslumCye3yU5cTpZPQmUy0g13xBBZa_eQfxoBc/edit?usp=sharing)

## Objetivo
O projeto tem como objetivo fazer o sensoriamento de um dispenser de ração automatizado, medindo  a quantidade proporcional, temperatura do alimento e a pressão no contêiner. Esse é um projeto que pode ter sua aplicação desde um alimentador de pets a aplicações agrícolas de larga escala, visando o monitoramento de silos, por exemplo.

## Sensores utilizados
**HCSR04**: Sensor ultrassônico de distância, utilizado para medir a quantidade proporcional de ração no depósito do dispenser.  
**BMP280**: Sensor de temperatura, pressão atmosférica e umidade, para coletar informações do contêiner.    
  
## Atuadores utilizados
**SSD1306**: Monitor de oled usado para mostrar as informações coletadas.  
**Buzzer**: Utilizado para alertar sobre baixos níveis de ração.  
**Servo Motor**: Usado para abrir a comporta para a ração ser servida.  
  
## Periféricos utilizados  
**GPIO**: Portas utilizadas para comunicação geral entre a placa e os dispositivos conectados.  
**Timer**: Utilizados principalmente para interrupções e PWM.  
**Real Time Clock**: Utilizado para gerar interrupção para servir o alimento do animal no horário delimitado   
**I2C**: Utilizado para comunicação com o Oled e com o BMP280.  
