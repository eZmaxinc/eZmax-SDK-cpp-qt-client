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

#include "OAIEzsignbulksenddocumentmapping_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksenddocumentmapping_Response::OAIEzsignbulksenddocumentmapping_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksenddocumentmapping_Response::OAIEzsignbulksenddocumentmapping_Response() {
    this->initializeModel();
}

OAIEzsignbulksenddocumentmapping_Response::~OAIEzsignbulksenddocumentmapping_Response() {}

void OAIEzsignbulksenddocumentmapping_Response::initializeModel() {

    m_pki_ezsignbulksenddocumentmapping_id_isSet = false;
    m_pki_ezsignbulksenddocumentmapping_id_isValid = false;

    m_fki_ezsignbulksend_id_isSet = false;
    m_fki_ezsignbulksend_id_isValid = false;

    m_fki_ezsigntemplatepackage_id_isSet = false;
    m_fki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;

    m_i_ezsignbulksenddocumentmapping_order_isSet = false;
    m_i_ezsignbulksenddocumentmapping_order_isValid = false;
}

void OAIEzsignbulksenddocumentmapping_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksenddocumentmapping_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignbulksenddocumentmapping_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignbulksenddocumentmapping_id, json[QString("pkiEzsignbulksenddocumentmappingID")]);
    m_pki_ezsignbulksenddocumentmapping_id_isSet = !json[QString("pkiEzsignbulksenddocumentmappingID")].isNull() && m_pki_ezsignbulksenddocumentmapping_id_isValid;

    m_fki_ezsignbulksend_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignbulksend_id, json[QString("fkiEzsignbulksendID")]);
    m_fki_ezsignbulksend_id_isSet = !json[QString("fkiEzsignbulksendID")].isNull() && m_fki_ezsignbulksend_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_i_ezsignbulksenddocumentmapping_order_isValid = ::OpenAPI::fromJsonValue(i_ezsignbulksenddocumentmapping_order, json[QString("iEzsignbulksenddocumentmappingOrder")]);
    m_i_ezsignbulksenddocumentmapping_order_isSet = !json[QString("iEzsignbulksenddocumentmappingOrder")].isNull() && m_i_ezsignbulksenddocumentmapping_order_isValid;
}

QString OAIEzsignbulksenddocumentmapping_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksenddocumentmapping_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignbulksenddocumentmapping_id_isSet) {
        obj.insert(QString("pkiEzsignbulksenddocumentmappingID"), ::OpenAPI::toJsonValue(pki_ezsignbulksenddocumentmapping_id));
    }
    if (m_fki_ezsignbulksend_id_isSet) {
        obj.insert(QString("fkiEzsignbulksendID"), ::OpenAPI::toJsonValue(fki_ezsignbulksend_id));
    }
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::OpenAPI::toJsonValue(fki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::OpenAPI::toJsonValue(fki_ezsigntemplate_id));
    }
    if (m_i_ezsignbulksenddocumentmapping_order_isSet) {
        obj.insert(QString("iEzsignbulksenddocumentmappingOrder"), ::OpenAPI::toJsonValue(i_ezsignbulksenddocumentmapping_order));
    }
    return obj;
}

qint32 OAIEzsignbulksenddocumentmapping_Response::getPkiEzsignbulksenddocumentmappingId() const {
    return pki_ezsignbulksenddocumentmapping_id;
}
void OAIEzsignbulksenddocumentmapping_Response::setPkiEzsignbulksenddocumentmappingId(const qint32 &pki_ezsignbulksenddocumentmapping_id) {
    this->pki_ezsignbulksenddocumentmapping_id = pki_ezsignbulksenddocumentmapping_id;
    this->m_pki_ezsignbulksenddocumentmapping_id_isSet = true;
}

bool OAIEzsignbulksenddocumentmapping_Response::is_pki_ezsignbulksenddocumentmapping_id_Set() const{
    return m_pki_ezsignbulksenddocumentmapping_id_isSet;
}

bool OAIEzsignbulksenddocumentmapping_Response::is_pki_ezsignbulksenddocumentmapping_id_Valid() const{
    return m_pki_ezsignbulksenddocumentmapping_id_isValid;
}

qint32 OAIEzsignbulksenddocumentmapping_Response::getFkiEzsignbulksendId() const {
    return fki_ezsignbulksend_id;
}
void OAIEzsignbulksenddocumentmapping_Response::setFkiEzsignbulksendId(const qint32 &fki_ezsignbulksend_id) {
    this->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    this->m_fki_ezsignbulksend_id_isSet = true;
}

bool OAIEzsignbulksenddocumentmapping_Response::is_fki_ezsignbulksend_id_Set() const{
    return m_fki_ezsignbulksend_id_isSet;
}

bool OAIEzsignbulksenddocumentmapping_Response::is_fki_ezsignbulksend_id_Valid() const{
    return m_fki_ezsignbulksend_id_isValid;
}

qint32 OAIEzsignbulksenddocumentmapping_Response::getFkiEzsigntemplatepackageId() const {
    return fki_ezsigntemplatepackage_id;
}
void OAIEzsignbulksenddocumentmapping_Response::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    this->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    this->m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool OAIEzsignbulksenddocumentmapping_Response::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool OAIEzsignbulksenddocumentmapping_Response::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

qint32 OAIEzsignbulksenddocumentmapping_Response::getFkiEzsigntemplateId() const {
    return fki_ezsigntemplate_id;
}
void OAIEzsignbulksenddocumentmapping_Response::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    this->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    this->m_fki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsignbulksenddocumentmapping_Response::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool OAIEzsignbulksenddocumentmapping_Response::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

qint32 OAIEzsignbulksenddocumentmapping_Response::getIEzsignbulksenddocumentmappingOrder() const {
    return i_ezsignbulksenddocumentmapping_order;
}
void OAIEzsignbulksenddocumentmapping_Response::setIEzsignbulksenddocumentmappingOrder(const qint32 &i_ezsignbulksenddocumentmapping_order) {
    this->i_ezsignbulksenddocumentmapping_order = i_ezsignbulksenddocumentmapping_order;
    this->m_i_ezsignbulksenddocumentmapping_order_isSet = true;
}

bool OAIEzsignbulksenddocumentmapping_Response::is_i_ezsignbulksenddocumentmapping_order_Set() const{
    return m_i_ezsignbulksenddocumentmapping_order_isSet;
}

bool OAIEzsignbulksenddocumentmapping_Response::is_i_ezsignbulksenddocumentmapping_order_Valid() const{
    return m_i_ezsignbulksenddocumentmapping_order_isValid;
}

bool OAIEzsignbulksenddocumentmapping_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignbulksenddocumentmapping_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignbulksend_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatepackage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignbulksenddocumentmapping_order_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksenddocumentmapping_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignbulksenddocumentmapping_id_isValid && m_fki_ezsignbulksend_id_isValid && m_i_ezsignbulksenddocumentmapping_order_isValid && true;
}

} // namespace OpenAPI
