/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfoldertype_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldertype_ListElement::OAIEzsignfoldertype_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldertype_ListElement::OAIEzsignfoldertype_ListElement() {
    this->initializeModel();
}

OAIEzsignfoldertype_ListElement::~OAIEzsignfoldertype_ListElement() {}

void OAIEzsignfoldertype_ListElement::initializeModel() {

    m_pki_ezsignfoldertype_id_isSet = false;
    m_pki_ezsignfoldertype_id_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;
}

void OAIEzsignfoldertype_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldertype_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignfoldertype_id, json[QString("pkiEzsignfoldertypeID")]);
    m_pki_ezsignfoldertype_id_isSet = !json[QString("pkiEzsignfoldertypeID")].isNull() && m_pki_ezsignfoldertype_id_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::OpenAPI::fromJsonValue(s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;
}

QString OAIEzsignfoldertype_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldertype_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("pkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(pki_ezsignfoldertype_id));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::OpenAPI::toJsonValue(s_ezsignfoldertype_name_x));
    }
    return obj;
}

qint32 OAIEzsignfoldertype_ListElement::getPkiEzsignfoldertypeId() const {
    return pki_ezsignfoldertype_id;
}
void OAIEzsignfoldertype_ListElement::setPkiEzsignfoldertypeId(const qint32 &pki_ezsignfoldertype_id) {
    this->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    this->m_pki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsignfoldertype_ListElement::is_pki_ezsignfoldertype_id_Set() const{
    return m_pki_ezsignfoldertype_id_isSet;
}

bool OAIEzsignfoldertype_ListElement::is_pki_ezsignfoldertype_id_Valid() const{
    return m_pki_ezsignfoldertype_id_isValid;
}

QString OAIEzsignfoldertype_ListElement::getSEzsignfoldertypeNameX() const {
    return s_ezsignfoldertype_name_x;
}
void OAIEzsignfoldertype_ListElement::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    this->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    this->m_s_ezsignfoldertype_name_x_isSet = true;
}

bool OAIEzsignfoldertype_ListElement::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool OAIEzsignfoldertype_ListElement::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

bool OAIEzsignfoldertype_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldertype_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfoldertype_id_isValid && m_s_ezsignfoldertype_name_x_isValid && true;
}

} // namespace OpenAPI
