'use strict';


const menu = document.querySelector('#menu');
const menuButton = document.querySelector('#menu-button');
const menuList = document.querySelector('.menu__list');

menuButton.addEventListener('click', toggleMenu);
menuList.addEventListener('click', closeMenu);


const MENU_STATE = {
    OPENED: 'opened',
    CLOSED: 'closed',
}


function toggleMenu() {
    menu.dataset.state === MENU_STATE.CLOSED ? openMenu() : closeMenu();
}


function openMenu() {
    menu.dataset.state = MENU_STATE.OPENED;
}


function closeMenu() {
    menu.dataset.state = MENU_STATE.CLOSED;
}
