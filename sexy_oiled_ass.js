const sky = document.getElementById('sky');

function createstar(x, y){
    const star = document.createElement('div');

    star.classList.add('star');
    star.style.top = '${y}';
    star.style.left = '${y}';
    sky.appendChild(star);

    setTimeout(() => {
        star.remove();
    }, 8000);
}
sky.addEventListener('click',  (e) =>
{
    createstar(e.clientX, e.clientY);
});

setInterval(() => {
    const x = math.random() * window.
    innerWidth;
    const y = math.random() * window.
    innerHeight;
    createstar(x, y);
}, 500);