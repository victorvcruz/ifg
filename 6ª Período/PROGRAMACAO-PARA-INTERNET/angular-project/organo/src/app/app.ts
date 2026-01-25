import { Component, signal } from '@angular/core';
import { Cabecalho } from './componentes/cabecalho/cabecalho';
import { Rodape } from './componentes/rodape/rodape';
import { Livro } from './componentes/livro/livro';

@Component({
  selector: 'app-root',
  imports: [Cabecalho, Rodape, Livro],
  templateUrl: './app.html',
  styleUrl: './app.css'
})
export class App {
  protected readonly title = signal('organo');
}
