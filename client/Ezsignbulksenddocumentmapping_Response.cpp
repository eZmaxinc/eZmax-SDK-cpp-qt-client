/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsignbulksenddocumentmapping_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignbulksenddocumentmapping_Response::Ezsignbulksenddocumentmapping_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignbulksenddocumentmapping_Response::Ezsignbulksenddocumentmapping_Response() {
    this->initializeModel();
}

Ezsignbulksenddocumentmapping_Response::~Ezsignbulksenddocumentmapping_Response() {}

void Ezsignbulksenddocumentmapping_Response::initializeModel() {

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

void Ezsignbulksenddocumentmapping_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignbulksenddocumentmapping_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignbulksenddocumentmapping_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignbulksenddocumentmapping_id, json[QString("pkiEzsignbulksenddocumentmappingID")]);
    m_pki_ezsignbulksenddocumentmapping_id_isSet = !json[QString("pkiEzsignbulksenddocumentmappingID")].isNull() && m_pki_ezsignbulksenddocumentmapping_id_isValid;

    m_fki_ezsignbulksend_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignbulksend_id, json[QString("fkiEzsignbulksendID")]);
    m_fki_ezsignbulksend_id_isSet = !json[QString("fkiEzsignbulksendID")].isNull() && m_fki_ezsignbulksend_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_i_ezsignbulksenddocumentmapping_order_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignbulksenddocumentmapping_order, json[QString("iEzsignbulksenddocumentmappingOrder")]);
    m_i_ezsignbulksenddocumentmapping_order_isSet = !json[QString("iEzsignbulksenddocumentmappingOrder")].isNull() && m_i_ezsignbulksenddocumentmapping_order_isValid;
}

QString Ezsignbulksenddocumentmapping_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignbulksenddocumentmapping_Response::asJsonObject() const {
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
    if (m_i_ezsignbulksenddocumentmapping_order_isSet) {
        obj.insert(QString("iEzsignbulksenddocumentmappingOrder"), ::Ezmaxapi::toJsonValue(m_i_ezsignbulksenddocumentmapping_order));
    }
    return obj;
}

qint32 Ezsignbulksenddocumentmapping_Response::getPkiEzsignbulksenddocumentmappingId() const {
    return m_pki_ezsignbulksenddocumentmapping_id;
}
void Ezsignbulksenddocumentmapping_Response::setPkiEzsignbulksenddocumentmappingId(const qint32 &pki_ezsignbulksenddocumentmapping_id) {
    m_pki_ezsignbulksenddocumentmapping_id = pki_ezsignbulksenddocumentmapping_id;
    m_pki_ezsignbulksenddocumentmapping_id_isSet = true;
}

bool Ezsignbulksenddocumentmapping_Response::is_pki_ezsignbulksenddocumentmapping_id_Set() const{
    return m_pki_ezsignbulksenddocumentmapping_id_isSet;
}

bool Ezsignbulksenddocumentmapping_Response::is_pki_ezsignbulksenddocumentmapping_id_Valid() const{
    return m_pki_ezsignbulksenddocumentmapping_id_isValid;
}

qint32 Ezsignbulksenddocumentmapping_Response::getFkiEzsignbulksendId() const {
    return m_fki_ezsignbulksend_id;
}
void Ezsignbulksenddocumentmapping_Response::setFkiEzsignbulksendId(const qint32 &fki_ezsignbulksend_id) {
    m_fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    m_fki_ezsignbulksend_id_isSet = true;
}

bool Ezsignbulksenddocumentmapping_Response::is_fki_ezsignbulksend_id_Set() const{
    return m_fki_ezsignbulksend_id_isSet;
}

bool Ezsignbulksenddocumentmapping_Response::is_fki_ezsignbulksend_id_Valid() const{
    return m_fki_ezsignbulksend_id_isValid;
}

qint32 Ezsignbulksenddocumentmapping_Response::getFkiEzsigntemplatepackageId() const {
    return m_fki_ezsigntemplatepackage_id;
}
void Ezsignbulksenddocumentmapping_Response::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    m_fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool Ezsignbulksenddocumentmapping_Response::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool Ezsignbulksenddocumentmapping_Response::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

qint32 Ezsignbulksenddocumentmapping_Response::getFkiEzsigntemplateId() const {
    return m_fki_ezsigntemplate_id;
}
void Ezsignbulksenddocumentmapping_Response::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    m_fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    m_fki_ezsigntemplate_id_isSet = true;
}

bool Ezsignbulksenddocumentmapping_Response::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool Ezsignbulksenddocumentmapping_Response::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

qint32 Ezsignbulksenddocumentmapping_Response::getIEzsignbulksenddocumentmappingOrder() const {
    return m_i_ezsignbulksenddocumentmapping_order;
}
void Ezsignbulksenddocumentmapping_Response::setIEzsignbulksenddocumentmappingOrder(const qint32 &i_ezsignbulksenddocumentmapping_order) {
    m_i_ezsignbulksenddocumentmapping_order = i_ezsignbulksenddocumentmapping_order;
    m_i_ezsignbulksenddocumentmapping_order_isSet = true;
}

bool Ezsignbulksenddocumentmapping_Response::is_i_ezsignbulksenddocumentmapping_order_Set() const{
    return m_i_ezsignbulksenddocumentmapping_order_isSet;
}

bool Ezsignbulksenddocumentmapping_Response::is_i_ezsignbulksenddocumentmapping_order_Valid() const{
    return m_i_ezsignbulksenddocumentmapping_order_isValid;
}

bool Ezsignbulksenddocumentmapping_Response::isSet() const {
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

bool Ezsignbulksenddocumentmapping_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignbulksenddocumentmapping_id_isValid && m_fki_ezsignbulksend_id_isValid && m_i_ezsignbulksenddocumentmapping_order_isValid && true;
}

} // namespace Ezmaxapi
