/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboulaza <zaboulaza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:25:20 by zaboulaza         #+#    #+#             */
/*   Updated: 2025/12/29 18:35:17 by zaboulaza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Span {

    public:

        Span();
        ~Span();
        Span(const Span &span);
        Span(unsigned int N);
        Span &operator=(const Span &span);

        void addNumber();

    private:

        unsigned int _N;

};
