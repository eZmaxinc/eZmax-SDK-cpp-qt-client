/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatesigner_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatesigner_Request::OAIEzsigntemplatesigner_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatesigner_Request::OAIEzsigntemplatesigner_Request() {
    this->initializeModel();
}

OAIEzsigntemplatesigner_Request::~OAIEzsigntemplatesigner_Request() {}

void OAIEzsigntemplatesigner_Request::initializeModel() {

    m_pki_ezsigntemplatesigner_id_isSet = false;
    m_pki_ezsigntemplatesigner_id_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;

    m_s_ezsigntemplatesigner_description_isSet = false;
    m_s_ezsigntemplatesigner_description_isValid = false;
}

void OAIEzsigntemplatesigner_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatesigner_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatesigner_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatesigner_id, json[QString("pkiEzsigntemplatesignerID")]);
    m_pki_ezsigntemplatesigner_id_isSet = !json[QString("pkiEzsigntemplatesignerID")].isNull() && m_pki_ezsigntemplatesigner_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_s_ezsigntemplatesigner_description_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatesigner_description, json[QString("sEzsigntemplatesignerDescription")]);
    m_s_ezsigntemplatesigner_description_isSet = !json[QString("sEzsigntemplatesignerDescription")].isNull() && m_s_ezsigntemplatesigner_description_isValid;
}

QString OAIEzsigntemplatesigner_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatesigner_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatesigner_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatesignerID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatesigner_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::OpenAPI::toJsonValue(fki_ezsigntemplate_id));
    }
    if (m_s_ezsigntemplatesigner_description_isSet) {
        obj.insert(QString("sEzsigntemplatesignerDescription"), ::OpenAPI::toJsonValue(s_ezsigntemplatesigner_description));
    }
    return obj;
}

qint32 OAIEzsigntemplatesigner_Request::getPkiEzsigntemplatesignerId() const {
    return pki_ezsigntemplatesigner_id;
}
void OAIEzsigntemplatesigner_Request::setPkiEzsigntemplatesignerId(const qint32 &pki_ezsigntemplatesigner_id) {
    this->pki_ezsigntemplatesigner_id = pki_ezsigntemplatesigner_id;
    this->m_pki_ezsigntemplatesigner_id_isSet = true;
}

bool OAIEzsigntemplatesigner_Request::is_pki_ezsigntemplatesigner_id_Set() const{
    return m_pki_ezsigntemplatesigner_id_isSet;
}

bool OAIEzsigntemplatesigner_Request::is_pki_ezsigntemplatesigner_id_Valid() const{
    return m_pki_ezsigntemplatesigner_id_isValid;
}

qint32 OAIEzsigntemplatesigner_Request::getFkiEzsigntemplateId() const {
    return fki_ezsigntemplate_id;
}
void OAIEzsigntemplatesigner_Request::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    this->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    this->m_fki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigntemplatesigner_Request::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool OAIEzsigntemplatesigner_Request::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

QString OAIEzsigntemplatesigner_Request::getSEzsigntemplatesignerDescription() const {
    return s_ezsigntemplatesigner_description;
}
void OAIEzsigntemplatesigner_Request::setSEzsigntemplatesignerDescription(const QString &s_ezsigntemplatesigner_description) {
    this->s_ezsigntemplatesigner_description = s_ezsigntemplatesigner_description;
    this->m_s_ezsigntemplatesigner_description_isSet = true;
}

bool OAIEzsigntemplatesigner_Request::is_s_ezsigntemplatesigner_description_Set() const{
    return m_s_ezsigntemplatesigner_description_isSet;
}

bool OAIEzsigntemplatesigner_Request::is_s_ezsigntemplatesigner_description_Valid() const{
    return m_s_ezsigntemplatesigner_description_isValid;
}

bool OAIEzsigntemplatesigner_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatesigner_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatesigner_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsigntemplate_id_isValid && m_s_ezsigntemplatesigner_description_isValid && true;
}

} // namespace OpenAPI
