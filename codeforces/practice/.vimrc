set updatetime=300
syntax on
set clipboard=unnamedplus
"set paste
filetype plugin indent on
set ts=2 sts=2 et ai si
set rnu
set noexpandtab
set tabstop=4
set shiftwidth=4
set autoindent
set noexpandtab
set noswapfile
inoremap <C-a> <Esc>ggVG
nnoremap <C-a> <Esc>ggVG

inoremap <A-j> <Esc>:m .+1<CR>==gi
inoremap <A-k> <Esc>:m .-2<CR>==gi
vnoremap <A-j> :m '>+1<CR>gv=gv
vnoremap <A-k> :m '<-2<CR>gv=gv
nnoremap <A-h> <C-W>H
nnoremap <A-j> <C-W>J
nnoremap <A-k> <C-W>K
nnoremap <A-l> <C-W>L
nnoremap <C-h> <C-w>h
nnoremap <C-j> <C-w>j
nnoremap <C-k> <C-w>k
nnoremap <C-l> <C-w>l