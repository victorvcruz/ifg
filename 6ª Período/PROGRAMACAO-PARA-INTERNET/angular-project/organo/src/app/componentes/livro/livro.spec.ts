import { ComponentFixture, TestBed } from '@angular/core/testing';

import { Livro } from './livro';

describe('Livro', () => {
  let component: Livro;
  let fixture: ComponentFixture<Livro>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      imports: [Livro]
    })
    .compileComponents();

    fixture = TestBed.createComponent(Livro);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
