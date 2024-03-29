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

#include "OAIEzsignbulksend_reorder_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksend_reorder_v1_Request::OAIEzsignbulksend_reorder_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksend_reorder_v1_Request::OAIEzsignbulksend_reorder_v1_Request() {
    this->initializeModel();
}

OAIEzsignbulksend_reorder_v1_Request::~OAIEzsignbulksend_reorder_v1_Request() {}

void OAIEzsignbulksend_reorder_v1_Request::initializeModel() {

    m_a_pki_ezsignbulksenddocumentmapping_id_isSet = false;
    m_a_pki_ezsignbulksenddocumentmapping_id_isValid = false;
}

void OAIEzsignbulksend_reorder_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksend_reorder_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_pki_ezsignbulksenddocumentmapping_id_isValid = ::OpenAPI::fromJsonValue(a_pki_ezsignbulksenddocumentmapping_id, json[QString("a_pkiEzsignbulksenddocumentmappingID")]);
    m_a_pki_ezsignbulksenddocumentmapping_id_isSet = !json[QString("a_pkiEzsignbulksenddocumentmappingID")].isNull() && m_a_pki_ezsignbulksenddocumentmapping_id_isValid;
}

QString OAIEzsignbulksend_reorder_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksend_reorder_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_pki_ezsignbulksenddocumentmapping_id.size() > 0) {
        obj.insert(QString("a_pkiEzsignbulksenddocumentmappingID"), ::OpenAPI::toJsonValue(a_pki_ezsignbulksenddocumentmapping_id));
    }
    return obj;
}

QList<qint32> OAIEzsignbulksend_reorder_v1_Request::getAPkiEzsignbulksenddocumentmappingId() const {
    return a_pki_ezsignbulksenddocumentmapping_id;
}
void OAIEzsignbulksend_reorder_v1_Request::setAPkiEzsignbulksenddocumentmappingId(const QList<qint32> &a_pki_ezsignbulksenddocumentmapping_id) {
    this->a_pki_ezsignbulksenddocumentmapping_id = a_pki_ezsignbulksenddocumentmapping_id;
    this->m_a_pki_ezsignbulksenddocumentmapping_id_isSet = true;
}

bool OAIEzsignbulksend_reorder_v1_Request::is_a_pki_ezsignbulksenddocumentmapping_id_Set() const{
    return m_a_pki_ezsignbulksenddocumentmapping_id_isSet;
}

bool OAIEzsignbulksend_reorder_v1_Request::is_a_pki_ezsignbulksenddocumentmapping_id_Valid() const{
    return m_a_pki_ezsignbulksenddocumentmapping_id_isValid;
}

bool OAIEzsignbulksend_reorder_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_pki_ezsignbulksenddocumentmapping_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksend_reorder_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_ezsignbulksenddocumentmapping_id_isValid && true;
}

} // namespace OpenAPI
