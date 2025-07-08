const questions=[
    {
        question:"Which is largest animal in the world?",
        answers:[
            {text:"Elephant",correct:false},
            {text:"Giraffe",correct:false},
            {text:"Blue Whale",correct:true},
            {text:"Shark",correct:false},
        ]
    },
    {
        question:"Which is the smallest country in the world?",
        answers:[
            {text:"Sri Lanka",correct:false},
            {text:"Bhutan",correct:false},
            {text:"Bolivia",correct:false},
            {text:"Vatican City",correct:true},
        ]
    },
]
const questionElement=document.getElementById("question");
const answerBtn=document.getElementById("answer-buttons");
const nextBtn=document.getElementById("next-btn");
let currentQuestionIndex=0;
let score=0;
const startQuiz=()=>{
    currentQuestionIndex=0;
    score=0;
    nextBtn.innerHTML="Next";
    showQuestion();
}
const showQuestion=()=>{
    resetState();
    let currentQuestion=questions[currentQuestionIndex];
    let questionNo=currentQuestionIndex+1;
    questionElement.innerHTML=questionNo +". "+currentQuestion.question;
    currentQuestion.answers.forEach(answer=>{
        const button=document.createElement("button");
        button.innerHTML=answer.text;
        button.classList.add("btn");
        answerBtn.appendChild(button);
        if(answer.correct){
            button.dataset.correct=answer.correct;
        }
        button.addEventListener("click",selectAnswer);
    })
}
const resetState=()=>{
    nextBtn.style.display="none";
    while(answerBtn.firstChild){
        answerBtn.removeChild(answerBtn.firstChild);
    }
}
function selectAnswer(e){
    const selectedBtn=e.target;
    const isCorrect=selectedBtn.dataset.correct==="true";
    if(isCorrect){
        selectedBtn.classList.add("correct");
        score++;
    }
    else{
        selectedBtn.classList.add("incorrect");
    }
    Array.from(answerBtn.children).forEach(button=>{
        if(button.dataset.correct==="true"){
            button.classList.add("correct");
        }
        button.disabled=true;
    });
    nextBtn.style.display="block";
}
function showScore(){
    resetState();
    questionElement.innerHTML=`You scored ${score} out of ${questions.length}!`;
    nextBtn.innerHTML="Play Again";
    nextBtn.style.display="block";
}
function handleNextButton(){
    currentQuestionIndex++;
    if(currentQuestionIndex<questions.length){
        showQuestion();
    }
    else{
        showScore();
    }
}
nextBtn.addEventListener("click",()=>{
    if(currentQuestionIndex<questions.length){
        handleNextButton();
    }
    else{
        startQuiz();
    }
})
startQuiz();
