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

#include "Ezsigntemplatepackagemembership_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatepackagemembership_ResponseCompound::Ezsigntemplatepackagemembership_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatepackagemembership_ResponseCompound::Ezsigntemplatepackagemembership_ResponseCompound() {
    this->initializeModel();
}

Ezsigntemplatepackagemembership_ResponseCompound::~Ezsigntemplatepackagemembership_ResponseCompound() {}

void Ezsigntemplatepackagemembership_ResponseCompound::initializeModel() {

    m_pki_ezsigntemplatepackagemembership_id_isSet = false;
    m_pki_ezsigntemplatepackagemembership_id_isValid = false;

    m_fki_ezsigntemplatepackage_id_isSet = false;
    m_fki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;

    m_i_ezsigntemplatepackagemembership_order_isSet = false;
    m_i_ezsigntemplatepackagemembership_order_isValid = false;

    m_obj_ezsigntemplate_isSet = false;
    m_obj_ezsigntemplate_isValid = false;

    m_a_obj_ezsigntemplatepackagesignermembership_isSet = false;
    m_a_obj_ezsigntemplatepackagesignermembership_isValid = false;
}

void Ezsigntemplatepackagemembership_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatepackagemembership_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackagemembership_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplatepackagemembership_id, json[QString("pkiEzsigntemplatepackagemembershipID")]);
    m_pki_ezsigntemplatepackagemembership_id_isSet = !json[QString("pkiEzsigntemplatepackagemembershipID")].isNull() && m_pki_ezsigntemplatepackagemembership_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_i_ezsigntemplatepackagemembership_order_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatepackagemembership_order, json[QString("iEzsigntemplatepackagemembershipOrder")]);
    m_i_ezsigntemplatepackagemembership_order_isSet = !json[QString("iEzsigntemplatepackagemembershipOrder")].isNull() && m_i_ezsigntemplatepackagemembership_order_isValid;

    m_obj_ezsigntemplate_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsigntemplate, json[QString("objEzsigntemplate")]);
    m_obj_ezsigntemplate_isSet = !json[QString("objEzsigntemplate")].isNull() && m_obj_ezsigntemplate_isValid;

    m_a_obj_ezsigntemplatepackagesignermembership_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigntemplatepackagesignermembership, json[QString("a_objEzsigntemplatepackagesignermembership")]);
    m_a_obj_ezsigntemplatepackagesignermembership_isSet = !json[QString("a_objEzsigntemplatepackagesignermembership")].isNull() && m_a_obj_ezsigntemplatepackagesignermembership_isValid;
}

QString Ezsigntemplatepackagemembership_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatepackagemembership_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackagemembership_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackagemembershipID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplatepackagemembership_id));
    }
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplate_id));
    }
    if (m_i_ezsigntemplatepackagemembership_order_isSet) {
        obj.insert(QString("iEzsigntemplatepackagemembershipOrder"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatepackagemembership_order));
    }
    if (m_obj_ezsigntemplate.isSet()) {
        obj.insert(QString("objEzsigntemplate"), ::Ezmaxapi::toJsonValue(m_obj_ezsigntemplate));
    }
    if (m_a_obj_ezsigntemplatepackagesignermembership.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatepackagesignermembership"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigntemplatepackagesignermembership));
    }
    return obj;
}

qint32 Ezsigntemplatepackagemembership_ResponseCompound::getPkiEzsigntemplatepackagemembershipId() const {
    return m_pki_ezsigntemplatepackagemembership_id;
}
void Ezsigntemplatepackagemembership_ResponseCompound::setPkiEzsigntemplatepackagemembershipId(const qint32 &pki_ezsigntemplatepackagemembership_id) {
    m_pki_ezsigntemplatepackagemembership_id = pki_ezsigntemplatepackagemembership_id;
    m_pki_ezsigntemplatepackagemembership_id_isSet = true;
}

bool Ezsigntemplatepackagemembership_ResponseCompound::is_pki_ezsigntemplatepackagemembership_id_Set() const{
    return m_pki_ezsigntemplatepackagemembership_id_isSet;
}

bool Ezsigntemplatepackagemembership_ResponseCompound::is_pki_ezsigntemplatepackagemembership_id_Valid() const{
    return m_pki_ezsigntemplatepackagemembership_id_isValid;
}

qint32 Ezsigntemplatepackagemembership_ResponseCompound::getFkiEzsigntemplatepackageId() const {
    return m_fki_ezsigntemplatepackage_id;
}
void Ezsigntemplatepackagemembership_ResponseCompound::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    m_fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool Ezsigntemplatepackagemembership_ResponseCompound::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool Ezsigntemplatepackagemembership_ResponseCompound::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

qint32 Ezsigntemplatepackagemembership_ResponseCompound::getFkiEzsigntemplateId() const {
    return m_fki_ezsigntemplate_id;
}
void Ezsigntemplatepackagemembership_ResponseCompound::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    m_fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    m_fki_ezsigntemplate_id_isSet = true;
}

bool Ezsigntemplatepackagemembership_ResponseCompound::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool Ezsigntemplatepackagemembership_ResponseCompound::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

qint32 Ezsigntemplatepackagemembership_ResponseCompound::getIEzsigntemplatepackagemembershipOrder() const {
    return m_i_ezsigntemplatepackagemembership_order;
}
void Ezsigntemplatepackagemembership_ResponseCompound::setIEzsigntemplatepackagemembershipOrder(const qint32 &i_ezsigntemplatepackagemembership_order) {
    m_i_ezsigntemplatepackagemembership_order = i_ezsigntemplatepackagemembership_order;
    m_i_ezsigntemplatepackagemembership_order_isSet = true;
}

bool Ezsigntemplatepackagemembership_ResponseCompound::is_i_ezsigntemplatepackagemembership_order_Set() const{
    return m_i_ezsigntemplatepackagemembership_order_isSet;
}

bool Ezsigntemplatepackagemembership_ResponseCompound::is_i_ezsigntemplatepackagemembership_order_Valid() const{
    return m_i_ezsigntemplatepackagemembership_order_isValid;
}

Ezsigntemplate_ResponseCompound Ezsigntemplatepackagemembership_ResponseCompound::getObjEzsigntemplate() const {
    return m_obj_ezsigntemplate;
}
void Ezsigntemplatepackagemembership_ResponseCompound::setObjEzsigntemplate(const Ezsigntemplate_ResponseCompound &obj_ezsigntemplate) {
    m_obj_ezsigntemplate = obj_ezsigntemplate;
    m_obj_ezsigntemplate_isSet = true;
}

bool Ezsigntemplatepackagemembership_ResponseCompound::is_obj_ezsigntemplate_Set() const{
    return m_obj_ezsigntemplate_isSet;
}

bool Ezsigntemplatepackagemembership_ResponseCompound::is_obj_ezsigntemplate_Valid() const{
    return m_obj_ezsigntemplate_isValid;
}

QList<Ezsigntemplatepackagesignermembership_ResponseCompound> Ezsigntemplatepackagemembership_ResponseCompound::getAObjEzsigntemplatepackagesignermembership() const {
    return m_a_obj_ezsigntemplatepackagesignermembership;
}
void Ezsigntemplatepackagemembership_ResponseCompound::setAObjEzsigntemplatepackagesignermembership(const QList<Ezsigntemplatepackagesignermembership_ResponseCompound> &a_obj_ezsigntemplatepackagesignermembership) {
    m_a_obj_ezsigntemplatepackagesignermembership = a_obj_ezsigntemplatepackagesignermembership;
    m_a_obj_ezsigntemplatepackagesignermembership_isSet = true;
}

bool Ezsigntemplatepackagemembership_ResponseCompound::is_a_obj_ezsigntemplatepackagesignermembership_Set() const{
    return m_a_obj_ezsigntemplatepackagesignermembership_isSet;
}

bool Ezsigntemplatepackagemembership_ResponseCompound::is_a_obj_ezsigntemplatepackagesignermembership_Valid() const{
    return m_a_obj_ezsigntemplatepackagesignermembership_isValid;
}

bool Ezsigntemplatepackagemembership_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepackagemembership_id_isSet) {
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

        if (m_i_ezsigntemplatepackagemembership_order_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezsigntemplate.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsigntemplatepackagesignermembership.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatepackagemembership_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatepackagemembership_id_isValid && m_fki_ezsigntemplatepackage_id_isValid && m_fki_ezsigntemplate_id_isValid && m_i_ezsigntemplatepackagemembership_order_isValid && m_obj_ezsigntemplate_isValid && m_a_obj_ezsigntemplatepackagesignermembership_isValid && true;
}

} // namespace Ezmaxapi
