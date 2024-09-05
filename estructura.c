/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estructura.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:13:28 by guigarri          #+#    #+#             */
/*   Updated: 2024/09/05 15:16:55 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct	Alumno
{
	char	nombre[30];
	char	email[30];
	int		edad;
	char	genero;
	char	carrera[30];
};

struct Alumno llenarRegistro(struct Alumno alumno)
{
	printf("Dame el nombre del alumno\n");
	scanf("%s", alumno.nombre);
	printf("Dame el email del alumno\n");
	scanf("%s", alumno.email);
	printf("Dame la edad del alumno\n");
	scanf("%d",&alumno.edad);
	printf("Dame el genero del alumno\n");
	scanf(" %c",&alumno.genero);
	printf("Dame la carrera del alumno\n");
	scanf("%s",alumno.carrera);

	return (alumno);
}

void	imprimirAlumno(struct Alumno alumno)
{
	printf("----------\n");
	printf("Nombre: %s \n", alumno.nombre);
	printf("Email: %s \n", alumno.email);
	printf("Edad: %d \n", alumno.edad);
	printf("Genero: %c \n", alumno.genero);
	printf("Carrera: %s \n", alumno.carrera);
}

int main()
{
	struct Alumno alumno[10];

	for (int indice=0; indice < 3; ++indice)
		alumno[indice]=llenarRegistro(alumno[indice]);

	for (int indice=0; indice < 3; ++indice)
		imprimirAlumno(alumno[indice]);

	return(0);
}
