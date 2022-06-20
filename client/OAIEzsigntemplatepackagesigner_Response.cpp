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

#include "OAIEzsigntemplatepackagesigner_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackagesigner_Response::OAIEzsigntemplatepackagesigner_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackagesigner_Response::OAIEzsigntemplatepackagesigner_Response() {
    this->initializeModel();
}

OAIEzsigntemplatepackagesigner_Response::~OAIEzsigntemplatepackagesigner_Response() {}

void OAIEzsigntemplatepackagesigner_Response::initializeModel() {

    m_pki_ezsigntemplatepackagesigner_id_isSet = false;
    m_pki_ezsigntemplatepackagesigner_id_isValid = false;

    m_fki_ezsigntemplatepackage_id_isSet = false;
    m_fki_ezsigntemplatepackage_id_isValid = false;

    m_s_ezsigntemplatepackagesigner_description_isSet = false;
    m_s_ezsigntemplatepackagesigner_description_isValid = false;
}

void OAIEzsigntemplatepackagesigner_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackagesigner_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackagesigner_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatepackagesigner_id, json[QString("pkiEzsigntemplatepackagesignerID")]);
    m_pki_ezsigntemplatepackagesigner_id_isSet = !json[QString("pkiEzsigntemplatepackagesignerID")].isNull() && m_pki_ezsigntemplatepackagesigner_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_s_ezsigntemplatepackagesigner_description_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatepackagesigner_description, json[QString("sEzsigntemplatepackagesignerDescription")]);
    m_s_ezsigntemplatepackagesigner_description_isSet = !json[QString("sEzsigntemplatepackagesignerDescription")].isNull() && m_s_ezsigntemplatepackagesigner_description_isValid;
}

QString OAIEzsigntemplatepackagesigner_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackagesigner_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackagesigner_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackagesignerID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatepackagesigner_id));
    }
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::OpenAPI::toJsonValue(fki_ezsigntemplatepackage_id));
    }
    if (m_s_ezsigntemplatepackagesigner_description_isSet) {
        obj.insert(QString("sEzsigntemplatepackagesignerDescription"), ::OpenAPI::toJsonValue(s_ezsigntemplatepackagesigner_description));
    }
    return obj;
}

qint32 OAIEzsigntemplatepackagesigner_Response::getPkiEzsigntemplatepackagesignerId() const {
    return pki_ezsigntemplatepackagesigner_id;
}
void OAIEzsigntemplatepackagesigner_Response::setPkiEzsigntemplatepackagesignerId(const qint32 &pki_ezsigntemplatepackagesigner_id) {
    this->pki_ezsigntemplatepackagesigner_id = pki_ezsigntemplatepackagesigner_id;
    this->m_pki_ezsigntemplatepackagesigner_id_isSet = true;
}

bool OAIEzsigntemplatepackagesigner_Response::is_pki_ezsigntemplatepackagesigner_id_Set() const{
    return m_pki_ezsigntemplatepackagesigner_id_isSet;
}

bool OAIEzsigntemplatepackagesigner_Response::is_pki_ezsigntemplatepackagesigner_id_Valid() const{
    return m_pki_ezsigntemplatepackagesigner_id_isValid;
}

qint32 OAIEzsigntemplatepackagesigner_Response::getFkiEzsigntemplatepackageId() const {
    return fki_ezsigntemplatepackage_id;
}
void OAIEzsigntemplatepackagesigner_Response::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    this->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    this->m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool OAIEzsigntemplatepackagesigner_Response::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool OAIEzsigntemplatepackagesigner_Response::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

QString OAIEzsigntemplatepackagesigner_Response::getSEzsigntemplatepackagesignerDescription() const {
    return s_ezsigntemplatepackagesigner_description;
}
void OAIEzsigntemplatepackagesigner_Response::setSEzsigntemplatepackagesignerDescription(const QString &s_ezsigntemplatepackagesigner_description) {
    this->s_ezsigntemplatepackagesigner_description = s_ezsigntemplatepackagesigner_description;
    this->m_s_ezsigntemplatepackagesigner_description_isSet = true;
}

bool OAIEzsigntemplatepackagesigner_Response::is_s_ezsigntemplatepackagesigner_description_Set() const{
    return m_s_ezsigntemplatepackagesigner_description_isSet;
}

bool OAIEzsigntemplatepackagesigner_Response::is_s_ezsigntemplatepackagesigner_description_Valid() const{
    return m_s_ezsigntemplatepackagesigner_description_isValid;
}

bool OAIEzsigntemplatepackagesigner_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepackagesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatepackage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatepackagesigner_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackagesigner_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatepackagesigner_id_isValid && m_fki_ezsigntemplatepackage_id_isValid && m_s_ezsigntemplatepackagesigner_description_isValid && true;
}

} // namespace OpenAPI
