<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <style>
      div {width: 120px; margin: auto; display: flex; justify-content: space-between;}
    </style>
    <title>Just For You &#129505</title>
  </head>
  <body style="text-align: center; background: linear-gradient(#878787, #FFDAB9);" >
    <audio autoplay loop>
       <source src="msc.mp3" type="audio/mpeg">
      </audio>
    <img src="" alt="" style="height: 280px" />
    <h1>Dina Arianti</h1>
    <h2>SEBELUM MENUJU WHATSAPP. AKU MAU MEYAKINKAN KAMU, MAU KAN JADI PACAR AKU??</H2>
        <h1>🌷🌷🌷</h1>
    <div>
      <button onclick="mau()" style="font-weight: bold;">MAU</button>
      <button onmouseover="gak(this)" style="font-weight: bold;">GAK</button>
    </div>
    <script>
      function mau() {
        alert("Makasih mau nerima aku, :)");
        alert("Kirim jawabannya ke WA aku ya.");

        location.assign("https://wa.me/+62895328740239?text=Aku%20mau%20jadi%20pacar%20kamu%20><");
      }
      function gak(ini) {
        ini.style.position = "absolute";
        ini.style.left = `${Math.floor(Math.random() * 90)}%`;
        ini.style.top = `${Math.floor(Math.random() * 90)}%`;
      }
    </script>
  </body>
</html>
