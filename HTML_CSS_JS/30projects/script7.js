const api_url="https://dummyjson.com/quotes/random"
const author=document.getElementById("author");
const quote=document.getElementById("quote");
async function getQuote(url) {
    const response=await fetch(url)
    var data= await response.json();
    quote.innerHTML=data.quote;
    author.innerHTML=data.author;
}
getQuote(api_url);
function post(){
    window.open("https://twitter.com/intent/tweet?text="+quote.innerHTML+"\n----by"+author.innerHTML,"Tweet Window","width=800, height=500");

}