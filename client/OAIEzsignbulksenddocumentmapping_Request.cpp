/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignbulksenddocumentmapping_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzsignbulksenddocumentmapping_Request::OAIEzsignbulksenddocumentmapping_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksenddocumentmapping_Request::OAIEzsignbulksenddocumentmapping_Request() {
    this->initializeModel();
}

OAIEzsignbulksenddocumentmapping_Request::~OAIEzsignbulksenddocumentmapping_Request() {}

void OAIEzsignbulksenddocumentmapping_Request::initializeModel() {

    m_pki_ezsignbulksenddocumentmapping_id_isSet = false;
    m_pki_ezsignbulksenddocumentmapping_id_isValid = false;

    m_fki_ezsignbulksend_id_isSet = false;
    m_fki_ezsignbulksend_id_isValid = false;

    m_fki_ezsigntemplatepackage_id_isSet = false;
    m_fki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;
}

void OAIEzsignbulksenddocumentmapping_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksenddocumentmapping_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsignbulksenddocumentmapping_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignbulksenddocumentmapping_id, json[QString("pkiEzsignbulksenddocumentmappingID")]);
    m_pki_ezsignbulksenddocumentmapping_id_isSet = !json[QString("pkiEzsignbulksenddocumentmappingID")].isNull() && m_pki_ezsignbulksenddocumentmapping_id_isValid;

    m_fki_ezsignbulksend_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignbulksend_id, json[QString("fkiEzsignbulksendID")]);
    m_fki_ezsignbulksend_id_isSet = !json[QString("fkiEzsignbulksendID")].isNull() && m_fki_ezsignbulksend_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;
}

QString OAIEzsignbulksenddocumentmapping_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksenddocumentmapping_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignbulksenddocumentmapping_id_isSet) {
        obj.insert(QString("pkiEzsignbulksenddocumentmappingID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignbulksenddocumentmapping_id));
    }
    if (m_fki_ezsignbulksend_id_isSet) {
        obj.insert(QString("fkiEzsignbulksendID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignbulksend_id));
    }
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplate_id));
    }
    return obj;
}

qint32 OAIEzsignbulksenddocumentmapping_Request::getPkiEzsignbulksenddocumentmappingId() const {
    return m_pki_ezsignbulksenddocumentmapping_id;
}
void OAIEzsignbulksenddocumentmapping_Request::setPkiEzsignbulksenddocumentmappingId(const qint32 &pki_ezsignbulksenddocumentmapping_id) {
    m_pki_ezsignbulksenddocumentmapping_id = pki_ezsignbulksenddocumentmapping_id;
    m_pki_ezsignbulksenddocumentmapping_id_isSet = true;
}

bool OAIEzsignbulksenddocumentmapping_Request::is_pki_ezsignbulksenddocumentmapping_id_Set() const{
    return m_pki_ezsignbulksenddocumentmapping_id_isSet;
}

bool OAIEzsignbulksenddocumentmapping_Request::is_pki_ezsignbulksenddocumentmapping_id_Valid() const{
    return m_pki_ezsignbulksenddocumentmapping_id_isValid;
}

qint32 OAIEzsignbulksenddocumentmapping_Request::getFkiEzsignbulksendId() const {
    return m_fki_ezsignbulksend_id;
}
void OAIEzsignbulksenddocumentmapping_Request::setFkiEzsignbulksendId(const qint32 &fki_ezsignbulksend_id) {
    m_fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    m_fki_ezsignbulksend_id_isSet = true;
}

bool OAIEzsignbulksenddocumentmapping_Request::is_fki_ezsignbulksend_id_Set() const{
    return m_fki_ezsignbulksend_id_isSet;
}

bool OAIEzsignbulksenddocumentmapping_Request::is_fki_ezsignbulksend_id_Valid() const{
    return m_fki_ezsignbulksend_id_isValid;
}

qint32 OAIEzsignbulksenddocumentmapping_Request::getFkiEzsigntemplatepackageId() const {
    return m_fki_ezsigntemplatepackage_id;
}
void OAIEzsignbulksenddocumentmapping_Request::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    m_fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool OAIEzsignbulksenddocumentmapping_Request::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool OAIEzsignbulksenddocumentmapping_Request::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

qint32 OAIEzsignbulksenddocumentmapping_Request::getFkiEzsigntemplateId() const {
    return m_fki_ezsigntemplate_id;
}
void OAIEzsignbulksenddocumentmapping_Request::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    m_fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    m_fki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsignbulksenddocumentmapping_Request::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool OAIEzsignbulksenddocumentmapping_Request::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

bool OAIEzsignbulksenddocumentmapping_Request::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksenddocumentmapping_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignbulksend_id_isValid && true;
}

} // namespace Ezmaxapi
