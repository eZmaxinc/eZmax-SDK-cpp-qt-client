/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsignbulksenddocumentmapping_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignbulksenddocumentmapping_ResponseCompound::Ezsignbulksenddocumentmapping_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignbulksenddocumentmapping_ResponseCompound::Ezsignbulksenddocumentmapping_ResponseCompound() {
    this->initializeModel();
}

Ezsignbulksenddocumentmapping_ResponseCompound::~Ezsignbulksenddocumentmapping_ResponseCompound() {}

void Ezsignbulksenddocumentmapping_ResponseCompound::initializeModel() {

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

    m_obj_ezsigntemplate_isSet = false;
    m_obj_ezsigntemplate_isValid = false;

    m_obj_ezsigntemplatepackage_isSet = false;
    m_obj_ezsigntemplatepackage_isValid = false;
}

void Ezsignbulksenddocumentmapping_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignbulksenddocumentmapping_ResponseCompound::fromJsonObject(QJsonObject json) {

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

    m_obj_ezsigntemplate_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsigntemplate, json[QString("objEzsigntemplate")]);
    m_obj_ezsigntemplate_isSet = !json[QString("objEzsigntemplate")].isNull() && m_obj_ezsigntemplate_isValid;

    m_obj_ezsigntemplatepackage_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsigntemplatepackage, json[QString("objEzsigntemplatepackage")]);
    m_obj_ezsigntemplatepackage_isSet = !json[QString("objEzsigntemplatepackage")].isNull() && m_obj_ezsigntemplatepackage_isValid;
}

QString Ezsignbulksenddocumentmapping_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignbulksenddocumentmapping_ResponseCompound::asJsonObject() const {
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
    if (m_obj_ezsigntemplate.isSet()) {
        obj.insert(QString("objEzsigntemplate"), ::Ezmaxapi::toJsonValue(m_obj_ezsigntemplate));
    }
    if (m_obj_ezsigntemplatepackage.isSet()) {
        obj.insert(QString("objEzsigntemplatepackage"), ::Ezmaxapi::toJsonValue(m_obj_ezsigntemplatepackage));
    }
    return obj;
}

qint32 Ezsignbulksenddocumentmapping_ResponseCompound::getPkiEzsignbulksenddocumentmappingId() const {
    return m_pki_ezsignbulksenddocumentmapping_id;
}
void Ezsignbulksenddocumentmapping_ResponseCompound::setPkiEzsignbulksenddocumentmappingId(const qint32 &pki_ezsignbulksenddocumentmapping_id) {
    m_pki_ezsignbulksenddocumentmapping_id = pki_ezsignbulksenddocumentmapping_id;
    m_pki_ezsignbulksenddocumentmapping_id_isSet = true;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::is_pki_ezsignbulksenddocumentmapping_id_Set() const{
    return m_pki_ezsignbulksenddocumentmapping_id_isSet;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::is_pki_ezsignbulksenddocumentmapping_id_Valid() const{
    return m_pki_ezsignbulksenddocumentmapping_id_isValid;
}

qint32 Ezsignbulksenddocumentmapping_ResponseCompound::getFkiEzsignbulksendId() const {
    return m_fki_ezsignbulksend_id;
}
void Ezsignbulksenddocumentmapping_ResponseCompound::setFkiEzsignbulksendId(const qint32 &fki_ezsignbulksend_id) {
    m_fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    m_fki_ezsignbulksend_id_isSet = true;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::is_fki_ezsignbulksend_id_Set() const{
    return m_fki_ezsignbulksend_id_isSet;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::is_fki_ezsignbulksend_id_Valid() const{
    return m_fki_ezsignbulksend_id_isValid;
}

qint32 Ezsignbulksenddocumentmapping_ResponseCompound::getFkiEzsigntemplatepackageId() const {
    return m_fki_ezsigntemplatepackage_id;
}
void Ezsignbulksenddocumentmapping_ResponseCompound::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    m_fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

qint32 Ezsignbulksenddocumentmapping_ResponseCompound::getFkiEzsigntemplateId() const {
    return m_fki_ezsigntemplate_id;
}
void Ezsignbulksenddocumentmapping_ResponseCompound::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    m_fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    m_fki_ezsigntemplate_id_isSet = true;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

qint32 Ezsignbulksenddocumentmapping_ResponseCompound::getIEzsignbulksenddocumentmappingOrder() const {
    return m_i_ezsignbulksenddocumentmapping_order;
}
void Ezsignbulksenddocumentmapping_ResponseCompound::setIEzsignbulksenddocumentmappingOrder(const qint32 &i_ezsignbulksenddocumentmapping_order) {
    m_i_ezsignbulksenddocumentmapping_order = i_ezsignbulksenddocumentmapping_order;
    m_i_ezsignbulksenddocumentmapping_order_isSet = true;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::is_i_ezsignbulksenddocumentmapping_order_Set() const{
    return m_i_ezsignbulksenddocumentmapping_order_isSet;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::is_i_ezsignbulksenddocumentmapping_order_Valid() const{
    return m_i_ezsignbulksenddocumentmapping_order_isValid;
}

Ezsigntemplate_ResponseCompound Ezsignbulksenddocumentmapping_ResponseCompound::getObjEzsigntemplate() const {
    return m_obj_ezsigntemplate;
}
void Ezsignbulksenddocumentmapping_ResponseCompound::setObjEzsigntemplate(const Ezsigntemplate_ResponseCompound &obj_ezsigntemplate) {
    m_obj_ezsigntemplate = obj_ezsigntemplate;
    m_obj_ezsigntemplate_isSet = true;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::is_obj_ezsigntemplate_Set() const{
    return m_obj_ezsigntemplate_isSet;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::is_obj_ezsigntemplate_Valid() const{
    return m_obj_ezsigntemplate_isValid;
}

Ezsigntemplatepackage_ResponseCompound Ezsignbulksenddocumentmapping_ResponseCompound::getObjEzsigntemplatepackage() const {
    return m_obj_ezsigntemplatepackage;
}
void Ezsignbulksenddocumentmapping_ResponseCompound::setObjEzsigntemplatepackage(const Ezsigntemplatepackage_ResponseCompound &obj_ezsigntemplatepackage) {
    m_obj_ezsigntemplatepackage = obj_ezsigntemplatepackage;
    m_obj_ezsigntemplatepackage_isSet = true;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::is_obj_ezsigntemplatepackage_Set() const{
    return m_obj_ezsigntemplatepackage_isSet;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::is_obj_ezsigntemplatepackage_Valid() const{
    return m_obj_ezsigntemplatepackage_isValid;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::isSet() const {
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

        if (m_obj_ezsigntemplate.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezsigntemplatepackage.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignbulksenddocumentmapping_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignbulksenddocumentmapping_id_isValid && m_fki_ezsignbulksend_id_isValid && m_i_ezsignbulksenddocumentmapping_order_isValid && true;
}

} // namespace Ezmaxapi
