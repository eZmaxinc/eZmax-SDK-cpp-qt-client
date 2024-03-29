/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatepackagesignermembership_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackagesignermembership_Request::OAIEzsigntemplatepackagesignermembership_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackagesignermembership_Request::OAIEzsigntemplatepackagesignermembership_Request() {
    this->initializeModel();
}

OAIEzsigntemplatepackagesignermembership_Request::~OAIEzsigntemplatepackagesignermembership_Request() {}

void OAIEzsigntemplatepackagesignermembership_Request::initializeModel() {

    m_pki_ezsigntemplatepackagesignermembership_id_isSet = false;
    m_pki_ezsigntemplatepackagesignermembership_id_isValid = false;

    m_fki_ezsigntemplatepackagemembership_id_isSet = false;
    m_fki_ezsigntemplatepackagemembership_id_isValid = false;

    m_fki_ezsigntemplatepackagesigner_id_isSet = false;
    m_fki_ezsigntemplatepackagesigner_id_isValid = false;

    m_fki_ezsigntemplatesigner_id_isSet = false;
    m_fki_ezsigntemplatesigner_id_isValid = false;

    m_i_ezsigntemplatepackagesignermembership_copy_isSet = false;
    m_i_ezsigntemplatepackagesignermembership_copy_isValid = false;
}

void OAIEzsigntemplatepackagesignermembership_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackagesignermembership_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackagesignermembership_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatepackagesignermembership_id, json[QString("pkiEzsigntemplatepackagesignermembershipID")]);
    m_pki_ezsigntemplatepackagesignermembership_id_isSet = !json[QString("pkiEzsigntemplatepackagesignermembershipID")].isNull() && m_pki_ezsigntemplatepackagesignermembership_id_isValid;

    m_fki_ezsigntemplatepackagemembership_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatepackagemembership_id, json[QString("fkiEzsigntemplatepackagemembershipID")]);
    m_fki_ezsigntemplatepackagemembership_id_isSet = !json[QString("fkiEzsigntemplatepackagemembershipID")].isNull() && m_fki_ezsigntemplatepackagemembership_id_isValid;

    m_fki_ezsigntemplatepackagesigner_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatepackagesigner_id, json[QString("fkiEzsigntemplatepackagesignerID")]);
    m_fki_ezsigntemplatepackagesigner_id_isSet = !json[QString("fkiEzsigntemplatepackagesignerID")].isNull() && m_fki_ezsigntemplatepackagesigner_id_isValid;

    m_fki_ezsigntemplatesigner_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatesigner_id, json[QString("fkiEzsigntemplatesignerID")]);
    m_fki_ezsigntemplatesigner_id_isSet = !json[QString("fkiEzsigntemplatesignerID")].isNull() && m_fki_ezsigntemplatesigner_id_isValid;

    m_i_ezsigntemplatepackagesignermembership_copy_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatepackagesignermembership_copy, json[QString("iEzsigntemplatepackagesignermembershipCopy")]);
    m_i_ezsigntemplatepackagesignermembership_copy_isSet = !json[QString("iEzsigntemplatepackagesignermembershipCopy")].isNull() && m_i_ezsigntemplatepackagesignermembership_copy_isValid;
}

QString OAIEzsigntemplatepackagesignermembership_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackagesignermembership_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackagesignermembership_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackagesignermembershipID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatepackagesignermembership_id));
    }
    if (m_fki_ezsigntemplatepackagemembership_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackagemembershipID"), ::OpenAPI::toJsonValue(fki_ezsigntemplatepackagemembership_id));
    }
    if (m_fki_ezsigntemplatepackagesigner_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackagesignerID"), ::OpenAPI::toJsonValue(fki_ezsigntemplatepackagesigner_id));
    }
    if (m_fki_ezsigntemplatesigner_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatesignerID"), ::OpenAPI::toJsonValue(fki_ezsigntemplatesigner_id));
    }
    if (m_i_ezsigntemplatepackagesignermembership_copy_isSet) {
        obj.insert(QString("iEzsigntemplatepackagesignermembershipCopy"), ::OpenAPI::toJsonValue(i_ezsigntemplatepackagesignermembership_copy));
    }
    return obj;
}

qint32 OAIEzsigntemplatepackagesignermembership_Request::getPkiEzsigntemplatepackagesignermembershipId() const {
    return pki_ezsigntemplatepackagesignermembership_id;
}
void OAIEzsigntemplatepackagesignermembership_Request::setPkiEzsigntemplatepackagesignermembershipId(const qint32 &pki_ezsigntemplatepackagesignermembership_id) {
    this->pki_ezsigntemplatepackagesignermembership_id = pki_ezsigntemplatepackagesignermembership_id;
    this->m_pki_ezsigntemplatepackagesignermembership_id_isSet = true;
}

bool OAIEzsigntemplatepackagesignermembership_Request::is_pki_ezsigntemplatepackagesignermembership_id_Set() const{
    return m_pki_ezsigntemplatepackagesignermembership_id_isSet;
}

bool OAIEzsigntemplatepackagesignermembership_Request::is_pki_ezsigntemplatepackagesignermembership_id_Valid() const{
    return m_pki_ezsigntemplatepackagesignermembership_id_isValid;
}

qint32 OAIEzsigntemplatepackagesignermembership_Request::getFkiEzsigntemplatepackagemembershipId() const {
    return fki_ezsigntemplatepackagemembership_id;
}
void OAIEzsigntemplatepackagesignermembership_Request::setFkiEzsigntemplatepackagemembershipId(const qint32 &fki_ezsigntemplatepackagemembership_id) {
    this->fki_ezsigntemplatepackagemembership_id = fki_ezsigntemplatepackagemembership_id;
    this->m_fki_ezsigntemplatepackagemembership_id_isSet = true;
}

bool OAIEzsigntemplatepackagesignermembership_Request::is_fki_ezsigntemplatepackagemembership_id_Set() const{
    return m_fki_ezsigntemplatepackagemembership_id_isSet;
}

bool OAIEzsigntemplatepackagesignermembership_Request::is_fki_ezsigntemplatepackagemembership_id_Valid() const{
    return m_fki_ezsigntemplatepackagemembership_id_isValid;
}

qint32 OAIEzsigntemplatepackagesignermembership_Request::getFkiEzsigntemplatepackagesignerId() const {
    return fki_ezsigntemplatepackagesigner_id;
}
void OAIEzsigntemplatepackagesignermembership_Request::setFkiEzsigntemplatepackagesignerId(const qint32 &fki_ezsigntemplatepackagesigner_id) {
    this->fki_ezsigntemplatepackagesigner_id = fki_ezsigntemplatepackagesigner_id;
    this->m_fki_ezsigntemplatepackagesigner_id_isSet = true;
}

bool OAIEzsigntemplatepackagesignermembership_Request::is_fki_ezsigntemplatepackagesigner_id_Set() const{
    return m_fki_ezsigntemplatepackagesigner_id_isSet;
}

bool OAIEzsigntemplatepackagesignermembership_Request::is_fki_ezsigntemplatepackagesigner_id_Valid() const{
    return m_fki_ezsigntemplatepackagesigner_id_isValid;
}

qint32 OAIEzsigntemplatepackagesignermembership_Request::getFkiEzsigntemplatesignerId() const {
    return fki_ezsigntemplatesigner_id;
}
void OAIEzsigntemplatepackagesignermembership_Request::setFkiEzsigntemplatesignerId(const qint32 &fki_ezsigntemplatesigner_id) {
    this->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    this->m_fki_ezsigntemplatesigner_id_isSet = true;
}

bool OAIEzsigntemplatepackagesignermembership_Request::is_fki_ezsigntemplatesigner_id_Set() const{
    return m_fki_ezsigntemplatesigner_id_isSet;
}

bool OAIEzsigntemplatepackagesignermembership_Request::is_fki_ezsigntemplatesigner_id_Valid() const{
    return m_fki_ezsigntemplatesigner_id_isValid;
}

qint32 OAIEzsigntemplatepackagesignermembership_Request::getIEzsigntemplatepackagesignermembershipCopy() const {
    return i_ezsigntemplatepackagesignermembership_copy;
}
void OAIEzsigntemplatepackagesignermembership_Request::setIEzsigntemplatepackagesignermembershipCopy(const qint32 &i_ezsigntemplatepackagesignermembership_copy) {
    this->i_ezsigntemplatepackagesignermembership_copy = i_ezsigntemplatepackagesignermembership_copy;
    this->m_i_ezsigntemplatepackagesignermembership_copy_isSet = true;
}

bool OAIEzsigntemplatepackagesignermembership_Request::is_i_ezsigntemplatepackagesignermembership_copy_Set() const{
    return m_i_ezsigntemplatepackagesignermembership_copy_isSet;
}

bool OAIEzsigntemplatepackagesignermembership_Request::is_i_ezsigntemplatepackagesignermembership_copy_Valid() const{
    return m_i_ezsigntemplatepackagesignermembership_copy_isValid;
}

bool OAIEzsigntemplatepackagesignermembership_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepackagesignermembership_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatepackagemembership_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatepackagesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatepackagesignermembership_copy_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackagesignermembership_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsigntemplatepackagemembership_id_isValid && m_fki_ezsigntemplatepackagesigner_id_isValid && m_fki_ezsigntemplatesigner_id_isValid && true;
}

} // namespace OpenAPI
