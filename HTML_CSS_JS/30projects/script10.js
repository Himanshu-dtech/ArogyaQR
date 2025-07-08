const playlist=[
    {music:"Despacito",artist:"Luis Fonsi ft. Puerto Rican",colour:"#FFFF33"},
    {music:"FindingHer",artist:"Kushagra",colour:"#00FFFF"},
    {music:"ShapeOfYou",artist:"Ed Sheeran",colour:"#3D5AFE"},
    {music:"MastMagan",artist:"Arijit Singh",colour:"#FFFCB0"},
    {music:"Raabta",artist:"Pritam",colour:"#FF073A"},
    {music:"Sapphire",artist:"Ed Sheeran",colour:"#0F52BA"}      
]
let progress=document.getElementById("progress");
let song=document.getElementById("song");
let ctrlIcon=document.getElementById("ctrlIcon");
let musicName=document.getElementById("musicName");
let artistName=document.getElementById("artistName");
let songImg=document.getElementById("song-img");
song.addEventListener("ended", () => {
    next(); 
});


let currentSongIndex=0;

song.onloadedmetadata=function(){
    progress.max=song.duration;
    progress.value=song.currentTime;
}
function playPause(){
    if(ctrlIcon.classList.contains("fa-pause")){
        song.pause();
        ctrlIcon.classList.remove("fa-pause");
        ctrlIcon.classList.add("fa-play");
    }
    else{
        song.play();
        ctrlIcon.classList.add("fa-pause");
        ctrlIcon.classList.remove("fa-play");
    }
}
if(song.play()){
    setInterval(()=>{
        progress.value=song.currentTime;
    },500);
}
progress.onchange=function(){
    song.play();
    song.currentTime=progress.value;
    ctrlIcon.classList.add("fa-pause");
    ctrlIcon.classList.remove("fa-play");
}
function next() {
    currentSongIndex++;
    if (currentSongIndex >= playlist.length) {
        currentSongIndex = 0;
    }
    song.src = "/HTML_CSS_JS/Media/" + playlist[currentSongIndex].music + ".mp3";
    musicName.innerText = playlist[currentSongIndex].music;
    artistName.innerText = playlist[currentSongIndex].artist;
    songImg.src="/HTML_CSS_JS/images/" + playlist[currentSongIndex].music +".png";
    document.querySelector(".back").style.backgroundImage =
    "url('/HTML_CSS_JS/images/" + playlist[currentSongIndex].music + ".png')";
    document.querySelector(".music-player").style.boxShadow =
    "0 0 2rem 0.8rem " + playlist[currentSongIndex].colour;
    song.play();
    ctrlIcon.classList.add("fa-pause");
    ctrlIcon.classList.remove("fa-play");
}
function previous() {
    currentSongIndex--;
    if (currentSongIndex < 0) {
        currentSongIndex = playlist.length - 1;
    }

    song.src = "/HTML_CSS_JS/Media/" + playlist[currentSongIndex].music + ".mp3";
    musicName.innerText = playlist[currentSongIndex].music;
    artistName.innerText = playlist[currentSongIndex].artist;
    songImg.src="/HTML_CSS_JS/images/" + playlist[currentSongIndex].music +".png";
    document.querySelector(".back").style.backgroundImage =
    "url('/HTML_CSS_JS/images/" + playlist[currentSongIndex].music + ".png')";
    document.querySelector(".music-player").style.boxShadow =
    "0 0 2rem 0.8rem " + playlist[currentSongIndex].colour;
    song.play();
    ctrlIcon.classList.add("fa-pause");
    ctrlIcon.classList.remove("fa-play");
}
