const searchBox=document.querySelector(".search input");
const searchBtn=document.querySelector(".search button");
const weatherIcon=document.querySelector(".weather-icon");
async function checkLocation(city) {
    const resp =await fetch(`http://api.openweathermap.org/geo/1.0/direct?q=${city}&limit=1&appid=57b1a0dc6c64346f2722fc8e0c3e7435`);
    var data=await resp.json();
    return {
        latitude:data[0].lat,
        longitude:data[0].lon
    };
 
}
async function checkWeather(city) {
    const {latitude,longitude}=await checkLocation(city);
    const apiKey="57b1a0dc6c64346f2722fc8e0c3e7435";
    const src_url=`https://api.openweathermap.org/data/2.5/weather?lat=${latitude}&lon=${longitude}&appid=${apiKey}&units=metric`;
    const response=await fetch(src_url);
        var collect=await response.json();
        console.log(collect);
        document.querySelector(".city").innerHTML=collect.name;
        document.querySelector(".temp").innerHTML=Math.round(collect.main.temp)+"°C";
        document.querySelector(".hum").innerHTML=collect.main.humidity+"%";
        document.querySelector(".wind").innerHTML=collect.wind.speed+"km/h";

        if(collect.weather[0].main=="Clouds"){
            weatherIcon.src="/HTML_CSS_JS/images/clouds.png";
        }
        else if(collect.weather[0].main=="CLear"){
            weatherIcon.src="/HTML_CSS_JS/images/clear.png";
        }
        else if(collect.weather[0].main=="Rain"){
            weatherIcon.src="/HTML_CSS_JS/images/rain.png";
        }
        else if(collect.weather[0].main=="Drizzle"){
            weatherIcon.src="/HTML_CSS_JS/images/drizzle.png";
        }
        else if(collect.weather[0].main=="Mist"){
            weatherIcon.src="/HTML_CSS_JS/images/mist.png";
        }
        else if(collect.weather[0].main=="Snow"){
            weatherIcon.src="/HTML_CSS_JS/images/snow.png";
        }
        document.querySelector(".weather").style.display="block";
        document.querySelector(".error").style.display="none";
};

searchBtn.addEventListener("click",()=>{
    checkWeather(searchBox.value);
})


