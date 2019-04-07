/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvautrai <cvautrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 10:18:47 by cvautrai          #+#    #+#             */
/*   Updated: 2019/04/06 14:58:41 by cvautrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY_HPP
# define IMONITORDISPLAY_HPP

# include <iostream>

class IMonitorDisplay {

public: 

	IMonitorDisplay(void) {}
	IMonitorDisplay(IMonitorDisplay const & src) {*this = src;} 
	virtual ~IMonitorDisplay(void) {} 

	virtual void	init(void) = 0;
	virtual void	update(void) = 0;
	virtual void	keyEvent(int) = 0;
	virtual void	quit(void) = 0;

	// std::string const	toString(void) const;

	IMonitorDisplay &		operator=(IMonitorDisplay const & rhs);

protected:

private:


};

// std::ostream &	operator<< (std::ostream & o, IMonitorDisplay const & rhs);

#endif