/**
* This file is part of SCAPI.
* SCAPI is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
* SCAPI is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
* You should have received a copy of the GNU General Public License along with SCAPI.  If not, see <http://www.gnu.org/licenses/>.
*
* Any publication and/or code referring to and/or based on SCAPI must contain an appropriate citation to SCAPI, including a reference to http://crypto.cs.biu.ac.il/SCAPI.
*
* SCAPI uses Crypto++, Miracl, NTL and Bouncy Castle. Please see these projects for any further licensing issues.
*
*/
package edu.biu.scapi.midLayer.ciphertext;


/**
 * This is a marker interface for all cipher-texts.
 * @author Cryptography and Computer Security Research Group Department of Computer Science Bar-Ilan University (Yael Ejgenberg)
 *
 */
public interface AsymmetricCiphertext {
	/**
	 * This function is used when an asymmetric ciphertext needs to be sent via a {@link edu.biu.scapi.comm#Channel} or any other means of sending data (including serialization).
	 * It retrieves all the data needed to reconstruct this ciphertext at a later time and/or in a different VM.
	 * It puts all the data in an instance of the relevant class that implements the AsymmetricCiphertextSendableData interface.
	 * @return the AsymmetricCiphertextSendableData object
	 */
	public AsymmetricCiphertextSendableData generateSendableData();
}